#include<iostream>
#include<queue>
using namespace std;

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

void printLevelOrder(Node* root){

    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){                  
        Node* node = q.front();             // Node* node is not equal to new Node(q.front())
        q.pop();

        if(node != NULL){                       //If node is not NULL
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){                //When the front was NULL 
            q.push(NULL);
        }
    }

}

//Sum at kth level
int SumAtk(Node* root, int k){

    if(root==NULL){
        return -1;                  //Assuming Binary tree has all positive elements
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    int sum=0;
    int level=0;

    while(!q.empty()){

        Node* node = q.front();
        q.pop();

        if( node != NULL){
            if(level == k){
                sum+= node->data;           //This will Store the sum of all the element of queue when level==k till it reaches NULL, 
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }else if(!q.empty()){

            q.push(NULL);
            level++;
        }
        
    }

    return sum;
}

int main(){

    int k; cin>>k;

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // printLevelOrder(root);
    // cout<<"\n";

    cout<<SumAtk(root, k);


    return 0;
}