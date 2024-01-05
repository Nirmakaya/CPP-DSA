#include<iostream>
using namespace std;

//Floyd's Algorithm or Here and Tortoise Algorithm : An algorithm to detect cycles in Linkedlist

class node{

    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void makeCycle(node* &head, int pos){
    
    node* temp=head;
    node* starNode; 

    int count=1;
    while(temp->next!=NULL){                //This means temp is running till the last node, so after the loop temp will be on last node

        if(count==pos){
            starNode=temp;
        }
        temp=temp->next;
        count++;
        
    }

    temp->next=starNode;                //Here we have made temp->next which is on last node and NULL, to point to the starNode. This will create a cycle

}

bool detectCycle(node* &head){

    node* fast=head;
    node* slow=head;

    while(fast!=NULL  && fast->next!=NULL){                                    //Here in while we have put condition when there is no cycle, because if there is a cycle the loop will run fine
    // fast is always moving ahead, hence fast is choosen
    // fast-> next must not be null since we are using fast->next->next in the below loop

        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){

    node* slow=head;
    node* fast=head;

    do{                                         //This will make the slow and fast meet somewhere at the cycle
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }

    slow->next=NULL;
}


void insertAttail(node* &head, int val){

    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    insertAttail(head,6);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    // display(head);
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);

 return 0;

}


   
