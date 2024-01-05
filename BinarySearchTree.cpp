#include<iostream>
using namespace std;

// Binary Search Tree :or BST is special binary tree created such that the search will take O(logn) time instead of O(n).
// It gives a sorted sequence in inorder sequence print

struct Node{
    int data;
    Node *left, * right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Insertion In BST
Node* insertBST(Node* root, int val){

    if(root == NULL){
        return new Node(val);                       //If root is NULL we will make a node of val and give it back
    }

    if(val < root->data){
        root->left = insertBST(root->left, val);
    }else{
        root->right = insertBST(root->right, val);
    }

    return root;

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

    Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    inorder(root);

    return 0;
}