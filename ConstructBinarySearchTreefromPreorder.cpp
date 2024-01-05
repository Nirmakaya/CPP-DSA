#include<iostream>
#include<climits>
using namespace std;

//We can only create BST from a preorder sequence, since inorder is sorted sequence of nodes

struct Node{
    int data;
    Node *left, * right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Filler Variables : here, min, max, n, key are the filler variables. PredrderIdx is a integer pointer for array
Node* constructBST(int preorder[], int* preorderIdx, int key, int min, int max, int n){

    //Key is the value that's need insertion

    if(*preorderIdx >= n){                //When it reaches the end of array then we will simply return NULL
        return NULL;
    }

    Node* root = NULL;

    if(key > min && key < max){                 //We will make the given key node only if it satisfoes BST condition between min and max
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;
    

        if(*preorderIdx < n){
            root->left = constructBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);          //Here key will be now the next element in preorder array
        }

        if(*preorderIdx < n){
            root->right = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }
    }

    return root;

}

void printPreorder(Node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}


int main(){

   int preorder[] = {10, 2, 1, 13, 11};
   int n = 5;
   int preorderIdx = 0;

   Node* root = constructBST(preorder, &preorderIdx, preorder[0], INT_MIN, INT_MAX, n);           //Here min amd max is -infinity to +infinity for level zero first node

   printPreorder(root);

    return 0;
}