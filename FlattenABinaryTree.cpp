#include<iostream>
using namespace std;

struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void flatten(Node* root){

    if(root==NULL || (root->left == NULL & root->right==NULL)){
        return;
    }

    if(root->left != NULL){

        flatten(root->left);

        Node* temp = root->right;               // A pointer which will store right side of binary tree
        root->right = root->left;               // making right equal to left and left NULL, now right has become left 
        root->left = NULL;

        Node* t = root->right;                  //To reach the tail of right side
        while(t->right != NULL){
            t= t->right;
        }

        t->right = temp;                    // Attaching right side's tail with temp in which previous right side was attached

    }

    flatten(root->right);               
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

    Node* root = new Node(4);
    root->left = new Node(9);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(6);

    /*  
             4
           /   \
          9     5
         / \   / 
        1   3 6

    */

    /*
            4
             \
              9 
               \
                1
                 \
                  3
                   \
                    5
                     \
                      6        

    */

    flatten(root);

    inorder(root);

    return 0;
}