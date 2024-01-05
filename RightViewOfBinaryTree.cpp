#include<iostream>
#include<queue>
using namespace std;

// Time Complexity : We have inserted es=ach element in queue once so O(n), n=number of nodes

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

void rightView(Node* root){

    if(root==NULL){                     //If root is NULL then we will Just Return "Control" to the main() function
        return;
    }

    queue<Node*> q;                         //Here we will use special type of Level Traversal Technique with no NULL value, just all the nodes of level at once
    q.push(root);

    
     
    while(!q.empty()){   

        int n = q.size();   

        
        for(int i=0; i<n; i++){

            Node* curr = q.front();             //This curr will point to a node of binary tree so, q.front() is a node, hence node datatype
            q.pop();

            if( i==n-1 ){               //When i becomes the rightmost element of that level in queue
                cout<<curr->data<<" ";
            }

            if(curr->left != NULL){                 //Insertion of second level element in queue
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }


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

    rightView(root1);


    return 0;
}