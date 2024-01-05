#include<iostream>
#include<stack>
using namespace std;

//Time Complexity : O(2n) which equals to O(n)

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;                        
        right = NULL;
    }
};

void zigzagTraversal(Node* root){

    if( root == NULL){
        return;
    }

    stack<Node*> currLevel;
    stack<Node*> nextLevel;

    bool leftToRight = true;

    currLevel.push(root);

    while(!currLevel.empty()){

        Node* temp = currLevel.top();
        currLevel.pop();

        if(temp){                   //check if temp is not NULL after pop()

            cout<<temp->data<<" ";
            
            if(leftToRight){

            
                if(temp->left){                         //Pushing child node leftToRight order in next level
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(root->right);
                }
            }
            else{           //Right to left insertion in nextlevel

                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
        }

        if(currLevel.empty()){                  //IF currLevel stack has become empty

            leftToRight = !leftToRight;
            swap(nextLevel, currLevel);
        }

    }
}



int main(){

    Node* root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);

    zigzagTraversal(root);

    return 0;
}