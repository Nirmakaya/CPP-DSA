#include<iostream>
using namespace std;

/* Binary Tree : Till now all the data structures like array, vector, stack, queue were data were stored linearly, means one value  after another
 * Tree : in which the data is stored hierarchically, like a folder inside another folder
 * Tree start is known as root, it has brances which connect to other node from root known as child node.
 * The last Node is know as Leaf
 * Binary Tree : is a tree in which each node has only two child node. One is left, one is right
 * In this Structure is used like we used to use class
 */

struct Node{

    int data;
    struct Node* left;              //This left declarartion has a struct and a Node*
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
 

int main(){

    struct Node* root= new Node(1);                 //Here we have created a simple binary tree
    root->left= new Node(2);
    root->right= new Node(3);

    root->left->left= new Node(4);
    root->left->right= new Node(5);

    /*   1
        / \
       2   3
      / \
     4   5

     */

    return 0;
}