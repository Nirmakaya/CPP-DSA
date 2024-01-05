#include<iostream>
using namespace std;

//Binary Tree traversal : there are 3 ways to travel over a binary tree and each has it's own benefits and uses

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

// 1st is preorder
void preorder(struct Node* root){

    if(root==NULL){                     //Base Condition
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);               //Here root->left will be the new root for preorder
    preorder(root->right);

}

//2nd id inorder
void inorder(struct Node* root){

    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

//3rd is postorder
void postorder(struct Node* root){

    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}


/*           1
           /   \
          2      3
         / \    / \
        4   5  6   7

*/

int main(){

    struct Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);

    preorder(root);
    cout<<"\n";

    inorder(root);
    cout<<"\n";

    postorder(root);
    cout<<"\n";
    


    return 0;
}