#include<iostream>
using namespace std;

//Time Complexity : O(n), at each recursive call e=we are checking for one time

struct Node{
    int data;
    Node *left, * right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool isBST(Node* root, Node* min=NULL, Node* max=NULL){               //We have taken min and max as Node pointer to pass on easy, and where we have initialised min and max in function argument for the first time

    if(root == NULL){
        return true;
    }

    if(min != NULL  && root->data <= min->data){
        return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }

    bool leftValid = isBST( root->left, min, root);
    bool rightValid = isBST( root->right, root, max);

    return leftValid and rightValid;                //Will return true only if lef and right is valid

}

int main(){

    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    if(isBST(root1, NULL, NULL)){
        cout<< "Valid BST"<<endl;
    }else{
        cout<< "Invalid BST"<<endl; 
    }

    Node* root2 = new Node(5);
    root2->left = new Node(2);
    root2->right = new Node(8);

    if(isBST(root2, NULL, NULL)){
        cout<< "Valid BST"<<endl;
    }else{
        cout<< "Invalid BST"<<endl; 
    }
    


    return 0;
}
