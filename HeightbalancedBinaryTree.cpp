#include<iostream>
using namespace std;

// Time Complexity : O(n^2), Optimised Approach : O(n)
// abs(lh-rh) <= 1 condition for height balanced

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

int height(Node* root){                 //Here root check for each node hence Time Complexity : O(n)

    if(root==NULL){
        return 0;
    }

    int lheight = height(root->left);
    int rheight = height(root->right);

    return max(lheight, rheight) + 1;

}

bool isBalanced(Node* root){                        

    if(root== NULL){
        return true;
    }

    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right) == false){
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if( abs(lh-rh) <= 1 ){                          //Here absoulute Difference function abs() is used which gives mod of difference
        return true;
    }else{
        return false;
    }
}

//Optimised Approach
bool isBalanced(Node* root, int* height){

    if(root==NULL){
        return true;
    }

    int lh=0,  rh=0;

    if(isBalanced(root->left, &lh) == false){
        return false;
    }
    if(isBalanced(root->right,&rh) == false){
        return false;
    }

    *height = max(lh,rh)+1;                         //We don;t need to retraverse over the tree we have calculated height at the same time

    if( abs(lh-rh) <= 1){
        return true;
    }else{
        return false;
    }
}

int main(){

    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(3);

    int height = 0;

    if(isBalanced(root1, &height)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Unbalanced Tree"<<endl;
    }



    return 0;
}