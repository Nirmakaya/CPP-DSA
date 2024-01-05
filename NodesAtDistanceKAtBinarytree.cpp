#include<iostream>
using namespace std;

/* Node's Subtree : the nodes after the current node or it's child node
   Node's Ancestor : current node's parent node
*/

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

//case 1
void printSubtreeNodes(Node* root, int k){

    if(root == NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }

    printSubtreeNodes(root->left, k-1);
    printSubtreeNodes(root->right, k-1);
}

//case 2
int printNodesAtk(Node* root, Node* target, int k){             //This will return the distance d which is the distance of ancestral node and target, and k-d will be the remaining distance to go if d reaches root node

    if(root == NULL){
        return -1;              //Case when the data is invalid
    }
    if(root == target){                     
        printSubtreeNodes(root, k);
        return 0;
    }

    int dl = printNodesAtk(root->left, target, k);
    if(dl != -1){
        if(dl+1 == k){                          //Case when we don't need to go to the right tree, the distance is equal to k already
            cout<<root->data<<" ";
        }else{

            printNodesAtk(root->right, target, k-dl-2);          //-2 because we are starting from root->right and onr extra of the root node since dl is distance only of left subtree
        }

        return dl+1;
    }

    int dr = printNodesAtk(root->right, target, k);
    if(dr != -1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            printNodesAtk(root->left, target, k-dr-2);
        }

        return dr+1;
    }

    return -1;              //When k given is invalid


}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    /*              1
                   / \
                  2   3
                 /
                4

    */

    printNodesAtk(root, root->left, 1);


    return 0;
}