#include<iostream>
#include<queue>
using namespace std;

struct Node{

    int data;
    Node* left, right;          //Not needed to write struct every time

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void leftView(Node* root){

    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        int n = q.size();

        for(int i=1; i<=n; i++){

            Node* temp = q.front();
            q.pop();

            if(i == 1){
                cout<<temp->data<<" ";
            }

            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }

        }
       
    }

}


int main(){

    Node* root1 = new Node(5);
    root1->left = new Node(3);
    root1->right = new Node(6);
    root1->left->left = new Node(2);
    root1->left->right = new Node(4);

    leftView(root1);


    return 0;
}