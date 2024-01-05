#include<iostream>
using namespace std;

// free(node) : to delete a node from BST

struct Node{
    int data;
    Node *left, * right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Searching
Node* searchInBST(Node* root, int key){

    if(root==NULL){                         //Base Case and This case is also for when key doesn't exist in BST
        return NULL;
    }

    if(root->data == key){
        return root;
    }

    if(root->data > key){
        return searchInBST(root->left, key);
    }

    if(root->data < key){
        return searchInBST(root->right, key);
    }

    return NULL;

}

Node* inorderSucc(Node* root){          

    //Here as inorder is sorted in BST so root here was root->right which will have higher value, 
    // And it's leftmost will be the next element in sequence of inorder

    Node* curr = root;

    while(curr && curr->left != NULL){              //If curr is NULL from start so we will return curr or root->right
        curr = curr->left;
    }

    return curr; 

}

//Deletion
Node* deleteinBST(Node* root, int key){                 //Here the node will return the Node of the new root after deletion of key

    //Inequality Check
    if(key < root->data){
        root->left = deleteinBST(root->left, key);                    //root->left now will have new BST after deleted Node
    }
    else if( key > root->data){                             //Else if cause if one is false then we don;t need to check second repeatedly
        root->right = deleteinBST(root->right, key);
    }
    //Equality Check : 3 cases
    else{

        //Cases when it is a leaf node OR when it is a node with only One child
        if(root->left == NULL){
            Node* temp = root->right;                   //Even if root->right is NULL this condition is ok
            free(root);                             //Syntax to delete a node in BST
            return temp;                            
        }
        else if( root->right == NULL){                      //Here we have swapped the value of root->left with current node root and then deleted the root
            Node* temp = root->left;
            free(root);
            return temp;
        }
        //Case when the node has two children
        Node* temp = inorderSucc(root->right);                      //The node after root->right in inorder Sequence
        root->data = temp->data;                                        //Replaced root's data with it's inorder Successor
        root->right = deleteinBST(root->right, temp->data);                 //We deleted the root's data actual value or the value of inorder Successor which is there in the root->right
    }
    return root;

}



void inorder(Node* root){

    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    // Node* ansNode = searchInBST(root, 10);

    // if(searchInBST(root, 10) == NULL){
    //     cout<<"Key Doesn't Exist"<<endl;
    // }else{
    //     cout<<"Key Node : "<<ansNode->data<<endl;
    // }

    inorder(root);
    cout<<endl;
    root = deleteinBST(root, 5);
    inorder(root);

    return 0;
}