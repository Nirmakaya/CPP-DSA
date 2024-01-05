#include<iostream>
using namespace std;

//Time Complexity of this reverse methond is O(n), since we are traversing the linked list only once 

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

        node* n= new node(val);

        if(head==NULL){                         //CornerCase
            head=n;
            return;
        }

        node* temp = head;

        while(temp->next!=NULL){
            temp=temp->next;
                                            
        }
        temp->next=n;
}

//Pointer's Method
node* reverse(node* &head){                      //Return type here is node* since we are returning new head of reversed linkedlist

    node* prevptr=NULL;                         //We have creater 3 pointers
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){

        nextptr=currptr->next;                      //Next will be pointing to one next
        currptr->next=prevptr;                      //This will reverse the link

        prevptr=currptr;                            //Now incresing all 3 by 1up, nextptr will automatically get updated due to loop
        currptr=nextptr;
    }

    return prevptr;                         //Prevptr would now have become the new head
}

//Recursive Method
node* recursiveReverse(node* &head){
    
    if(head==NULL  ||  head->next==NULL){                   //Base case : when there is no  or only one element in linkedlist
        return head;
    }

    node* newhead  = recursiveReverse(head->next);          //Recursive call just like n+1 here is head->next
    head->next->next=head;
    head->next=NULL;                        //Since now head has became the last node

    return newhead;

}


void display(node* head){           //Here it is call by value and only value of head initially NULL is sent which cannot be used to modify the actual head's value

    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}


int main(){

    node* head= NULL;
    insertAttail(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head,4);

    display(head);  
    // node* newhead= reverse(head);
    node* newhead= recursiveReverse(head);
    display(newhead);


    return 0;
}
