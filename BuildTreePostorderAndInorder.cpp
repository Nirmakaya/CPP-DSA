#include<iostream>
using namespace std;

/* We cannot buld a tree from a postorder and a preorder unless it is a Full Binary Tree
 * General Binary tree or Skew Binary tree which has node with left!=right, then we cannot contruct a binary tree
 * Because there would be multiple Binary trees for a skew binary tree created with the same postorder and preorder
 */

struct Node{

    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[], int start, int end, int val){

    for(int i=start; i<=end; i++){
        if(inorder[i]==val){
            return i;
        }
    }

    return -1;
}

Node* buildTree( int postorder[], int inorder[], int start, int end){

    static int idx= 4;              //Here we have manually written the n-1 element of the postorder array

    if(start>end){                  //Base Case : when pos+1 or pos-1 makes start>end
        return NULL;
    }

    int val= postorder[idx];
    idx--;

    Node* curr = new Node(val);                 //Construction of the Binary Tree

    if(start==end){                         //Edge case
        return curr;
    }

    int pos = search(inorder, start, end, val);

    curr->right= buildTree(postorder, inorder, pos+1, end);             //Here we have buld right side of tree first due to nature of postorder sequence
    curr->left= buildTree(postorder, inorder, start, pos-1);

    return curr;
}

void inorderPrint(Node* root){

    if(root==NULL){
        return;
    }

    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);

}

int main(){

    int postorder[]= {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};

    Node* root = buildTree(postorder, inorder, 0, 4);

    inorderPrint(root);


    return 0;
}