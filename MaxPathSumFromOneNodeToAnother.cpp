#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

struct Node{
    int data;
    Node *left, * right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int maxPathUtil(Node* root, int &ans){

    if(root==NULL){
        return 0;
    }

    int left = maxPathUtil(root->left, ans);
    int right = maxPathUtil(root->right, ans);

    int nodeMax = max( max(root->data, root->data + left + right), max(root->data + left, root->data + right));

    ans = max(ans, nodeMax);                //Here ans is changed directly by use of pointers

    /* Single path sum is a function which will give value of maximum path length in this root->data+left+right is excluded,
                 because we need a single path and not a complete path. Since we need to included previous ancestors */

    int singlePathSum = max(root->data, max(root->data + left, root->data+right));

    return singlePathSum;

}

int maxPathSum(Node* root){

    int ans = INT_MIN;

    maxPathUtil(root, ans);                         //A utility function for Maximum Path

    return ans;
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    
    cout<<maxPathSum(root);

    return 0;
}