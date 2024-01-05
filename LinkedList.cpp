#include<iostream>
using namespace std;

/* Linked list : It has a head which stores the address of first node. 
 * Each Node has a "data" = which is the value and "next" = which has the address of next node
 * It's memory allocation isn't Contiguous
 * Head= is a pointer which stores the address of the first list
 */

//Nodes of Linked list is not build in, it is user defined
class node{
    public:
    int data;
    node* next;                 //Since it will point to another node hence pointer's datatype is node.

    node(int val){              //A constructor to store the value to data and next becomes NULL
        data = val;
        next = NULL;
    }
    
};

void insertAtHead(node* &head, int val){

    node* n = new node(val);                //Creating a new node n to add in the linked list
    n->next = head;                         //in next of n, head is stored and the new head is replaced by n
    head = n;
}

void insertAtTail(node* &head, int val){                      //To insert a value at tail of linked list

    //Here the head is call by reference and not by value since we need to modify our linked list

    node* n = new node(val);                //Created a new node, of name 'n' which has "data field" value as val and next as NULL

    //Since node(any value) will call the constructor and stores the value and next=NULL


    //CornerCase when there isn't a single node in the Linked list
    if(head==NULL){
        head=n;
        return;
    }

    //Now to traverse over the linked list we will create a pointer for while loop, which starts from head. Just like int i=0
    node* temp = head;                  

    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;               //And n has already next value as NULL

}



void display(node* head){

    //Here we have called by value because we aren't making any cahnges in the linked list

    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key){

    node* temp=head;                //Creater a temp to traverse which is a pointer and stores head which is also a pointer

    while(temp !=NULL){        
        if(temp->data==key){
            return true;
        }
        temp=temp->next;                //To update temp, just lik i++
    }
    return false;
}

void deleteAtHead(node* &head){             //Corner case when we need to dlete at head

    node* todelete=head;
    head=head->next;

    delete todelete;                    //This step is crucial otherwise it will result in "Memory Leak"
}

void deletion(node* &head, int val){            //In this we cannot delete the first element

    //Two CornerCase : Good habit to always write the corner cases
    if(head==NULL){                 //When list is empty 
        return;
    }
    if(head->next=NULL){            //When the first element is also the last element. Only one element in the linked list
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    while(temp->next->data != val){                 //temp next data value must be the integer, to dlete n, we have accessed n-1

        temp = temp->next;
    }
    node* toDelete = temp->next;                    //To stor the actual n or value 
    temp->next= temp->next->next;                   //Here n-1 will now point to n+1, and n is no longer in link
    delete toDelete;                               //Atlast to delete n

}


int main(){

    node* head=NULL;                    //This means initially our linked list is empty
    insertAtTail(head, 1);              //We have send head = a pointer, and an integer value
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
    cout<<search(head,5)<<endl;
    // deletion(head,2);
    deleteAtHead(head);
    display(head);



    return 0;
}