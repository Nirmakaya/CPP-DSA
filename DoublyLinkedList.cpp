#include<iostream>
using namespace std;

/* Doubly linked list has a data, next and an extra prev. 
 * Each prev is pointed to it's previous node
 */

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){                          //Constructor
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAthead(node* &head, int val){

    node* n=new node(val);
    n->next=head;                       //This will also be valid if the doubly linked list is NULL, but it won't have a prev of head

    if(head!=NULL){                     //This will handle the corner case when head is NULL
        head->prev=n;
    }
    
    head=n;
}

void insertAttail(node* &head, int val){

    if(head==NULL){                     //Edge case

        insertAthead(head, val);
        return;
    }

    node* n= new node(val);

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head){

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;

}

void deleteAthead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}


void deletion(node* &head, int pos){

    node* temp=head;
    int count=1;

    if(pos==1){                             //CornerCase When pos is 1
        deleteAthead(head);
        return;
    }

    while(temp!=NULL  && count!=pos){
        temp=temp->next;
        count++;
    }

    temp->prev->next=temp->next;

    if(temp->next=NULL){                        //Cornercase
    temp->next->prev=temp->prev;                //This conditon will give error if we are at last node
    }

    delete temp;

}


int main(){

    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    display(head);
    insertAthead(head,5);
    display(head);
    deletion(head,1);
    display(head);

    return 0;
}