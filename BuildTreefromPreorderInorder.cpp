#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
}; 

int search(int inorder[], int start, int end, int curr){

    for(int i=start; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }

    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end) {                                               //Node pointer is the return type and this represent each node of the binary tree 

    static int idx=0;           //Since it is incrementing only once so it is like static

    if(start > end){                  //An Invalid Case, and also the Base case of this Recursive Function 
        return NULL;
    }

    int curr = preorder[idx];
    idx++;

    Node* node = new Node(curr);

    if(start==end){                         //Special case or Corner case or Edge case when only 1 element is there.
        return node;
    }

    int pos= search(inorder, start, end, curr);                 //This will store the position of curr in inorder sequence
    node->left = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder, pos+1, end);

    return node;
}

void inorderPrint(Node* root){

    if(root==NULL){                 //Base condition of recursive function
        return;
    }

    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}


int main(){

    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    

    Node* root = buildTree(preorder, inorder, 0, 4);

    inorderPrint(root);             //Check if the tree we build is same or not

    return 0;
}