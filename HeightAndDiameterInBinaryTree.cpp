#include<iostream>
using namespace std;

// Time Complexity =  Height: O(n) , Diameter : O(n^2). n=nodes

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

int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }

    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);

    return max(lheight,rheight)+1;

}

int calcDiameter(Node* root){

    if(root==NULL){
        return 0;
    }

    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);

    int currDiameter = lheight + rheight +1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter, max(lDiameter,rDiameter));
}

//Optimised Approach of Diameter
int calcDiameter(Node* root, int* height){

    if(root==NULL){
        *height=0;
        return 0;
    }

    int lh=0,  rh=0;
    int lDiameter = calcDiameter(root->left, &lh);
    int rDiameter = calcDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;

    *height = max(lh, rh) + 1;

    return max(currDiameter, max(lDiameter, rDiameter));
}


int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<calcHeight(root)<<endl;


    cout<<calcDiameter(root)<<endl;

    int height=0;

    cout<<calcDiameter(root, &height)<<endl;


    return 0;
}