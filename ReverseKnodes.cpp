#include<iostream>
using namespace std;

//To reverse k nodes of linked list. Time Complexity : O(n)

class node{

    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

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

//Standard code to reverse Knode, we use both pointer and recursive method combined
node* reversek(node* &head, int k){

    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    int count=0;

    while(currptr!=NULL  && count<k){                   //This will give the first k nodes in reverse by pointers method
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    
    if(nextptr!=NULL){              //Acheck that nexptr has not bedcome NULL or the linked list has not ended after reverse by pointer

    //Now head is still pointing to 1st node which needs to be connected to the rest of the reversed node
    head->next = reversek(nextptr,k);                //Here nextptr will be having the value of k+1th node
    }

    return prevptr;                     //Our new head
}


int main(){

    node* head=NULL;
    insertAttail(head, 1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    insertAttail(head,6);
    display(head);

    int k=2;
    node* newhead= reversek(head,k);
    display(newhead);

    return 0;
}