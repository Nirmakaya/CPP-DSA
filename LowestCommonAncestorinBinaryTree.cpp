#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(n) in 1st case but too many traversal over Nodes, 

struct Node{
    int data;
    Node *left, * right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool getPath(Node* root, int key, vector<int> &path){               //Here vector is call by reference

    if(root == NULL){               //When leave node has not left or right OR when given root is empty
        return false;
    }

    path.push_back(root->data);                 //This line should be after the base condition root==NULL,

    if(root->data == key){                  //This root->data is pushed into vector
        return true;
    }

    if( getPath(root->left, key, path) || getPath(root->right, key, path)){           //If in any left or right subtree getPath() is true then return true
        return true;
    }

    path.pop_back();                //Case when key is not there in root->dat or in root->left or root->right, then delete the vector's element.
    //Wrong Path

    return false;

}


int LCA(Node* root, int n1, int n2){                //This return int is the data of the Lowest common ancestor node, and n1 and n2 are data of the two given nodes for LCA

    vector<int> path1, path2;

    if( !getPath(root, n1, path1)  ||  !getPath(root, n2, path2)){

        return -1;              //Assuming all nodes are positive and -1 indicates that n1 or n2 is not valid

    }

    int pc;             //pc= path change, point where path has changed that will be LCA

    for(pc=0; pc< path1.size() && path2.size(); pc++){                  //In this for first time we have used &&, pc will run till it is less than size of both path

        if( path1[pc] != path2[pc]){                //This pc value will become not equal when one more than the path change
            break;
        }

    }

    return path1[pc-1];
}

//In a Single Tree Traversal, Time Complexity is Still O(n)
Node* LCA2(Node* root, int n1, int n2){                                 //In this the return is a node of the LCA

    if(root == NULL){
        return NULL;
    }

    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* leftLCA = LCA2(root->left, n1, n2);
    Node* rightLCA = LCA2(root->right, n1, n2);

    if(leftLCA && rightLCA){                //if both are not NULL, then the current node will be lca or a common point
        return root;
    }

    if( leftLCA != NULL){               //Case when left is valid and right is "Implicitly" not valid
        return leftLCA;
    }

    return rightLCA;

}

/* 
            1
           / \
          2   3
         /   / \
        4   5   6
           /     
          7       
*/


int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);

    int n1=7;
    int n2=6;

    // int lca = LCA(root, n1, n2);
    
    // if(lca == =1 ){
    //     cout<<"LCA doesn't exist"<<endl;
    // }else{
    //     cout<<"LCA : "<<lca<<endl;
    // }


    Node* lca = LCA2(root, n1, n2);
    
    if(lca == NULL ){
        cout<<"LCA doesn't exist"<<endl;
    }else{
        cout<<"LCA : "<<lca->data<<endl;
    }

    return 0;
}
