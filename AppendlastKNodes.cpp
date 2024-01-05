#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

int length(node* head){
    node* temp=head;
    int l=0;                            //Here l will start from zero

    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}

node* kappend(node* &head, int k){              //return type is node

    node* newHead;
    node* newTail;
    node* tail=head;

    int l=length(head);
    k=k%l;                              //Corner case when k is bigger than l
    
    int count=1;
    while(tail->next!=NULL){

        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }

    newTail->next=NULL;
    tail->next=head;

    return newHead;
}

void insertAttail(node* &head, int val){

    node* n=new node(val);
    node* temp=head;

    if(head==NULL){
        head=n;
        return;
    }

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
    }cout<<"NULL"<<endl;
}

int main(){

    node* head=NULL;
    int arr[]={1,2,3,4,5,6};                        //New way to insert values at tails

    for(int i=0;i<6;i++){
        insertAttail(head,arr[i]);
    }
    
    display(head);
    node* newHead= kappend(head,3);

    display(newHead);


    return 0;
}