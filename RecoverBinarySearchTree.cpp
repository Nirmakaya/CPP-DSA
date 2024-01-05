#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;                        
        right = NULL;
    }
};

void calcPointers(Node* root, Node** first, Node** mid, Node** last, Node** prev){              //Here first and second are node pointers of which are call by reference hence ** two asterisk sre used

    if(root == NULL){
        return;
    }

    calcPointers(root->left, first, mid, last, prev);

    if(*prev && root->data < (*prev)->data ){               //when it violates BST inorder property

        if(!*first){

            *first = *prev;
            *mid = root;

        }else{
            *last = root;               //This will be only for case 1, when codition will be violated for the second time
        }
    }

    *prev = root;           //Now root will become previous for the right subtree

    calcPointers(root->right, first, mid, last, prev);
}


void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void restoreBST(Node* root){

    Node* first = NULL;
    Node* last = NULL;
    Node* mid = NULL;
    Node* prev = NULL;

    //A Utility Function
    calcPointers(root, &first, &mid, &last, &prev);             //This will give the pointer values
    
    //case 1 : When it's not an adjacent element
    if(first && last){                  

        swap( &(first->data), &(last->data) );
    }
    //case 2 : When they are adjacent
    else if( first && mid){
        swap( &(first->data), &(mid->data) );
    }

}

void inorder(Node* root){

    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main(){

    Node* root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(13);


    inorder(root);
    cout<<endl;

    restoreBST(root);

    inorder(root);

    return 0;
}