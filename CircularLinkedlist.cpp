#include<iostream>
using namespace std;

//Circular linked List : When the last node is pointing to the first one.

class node{                     //Structure Of Circular linked list
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertAthead(node*  &head, int val){

    node* n=new node(val);

    //Edge case when it is NULL so we won;t be able to access the temp->next, and it will give error
    if(head==NULL){
        n->next=n;                      //This will make n itself the first element, and a circular linkedlist
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertAttail(node* &head, int val){

    if(head==NULL){
        insertAthead(head,val);
        return;
    }

    node* n=new node(val);

    node* temp=head;
    while(temp->next!=head){                    //Here last node will point at first, hence we have written till  head
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void deleteAthead(node* &head){

    node* temp=head;
    
    while(temp->next!=head){
        temp=temp->next;
    }

    node* todelete=head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
}

void deletion(node* &head, int pos){

    if(pos==1){                 //When we have to delete the first position, since we cannot access the previous node of head, so we need to address this corner case otherwise it will error
        deleteAthead(head);
        return;
    }

    node* temp=head;
    int count=1;

    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;                  //A pointer to remember the deletion node
    temp->next=temp->next->next;                //Now this will point to the head node
    delete todelete;
}

void display(node* head){

    node* temp=head;
    /* while(temp->!=head);
     * This will skip the last element since at last temp->next will be equal to head 

     * while(temp!=head)
     * Now this will not even let us enter the loop since at start temp=head
     * Sohere we will use do-while loop
     */

    do{
        cout<<temp->data<<"->";
        temp=temp->next;

    }while(temp!=head);
    cout<<endl;
        
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