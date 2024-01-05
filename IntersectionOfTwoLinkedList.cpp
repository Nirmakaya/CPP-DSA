#include<iostream>
using namespace std;

//Time Complexity : O(Greater length of linked list amongst both)

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void intersect(node* &head1, node* &head2, int pos){

    node* temp1=head1;
    pos--;                              //Since it is already starting from head1, so already on 1st position
    while(pos--){                       //This will make temp1 to reach pos positions in the linked list. Loop will run for pos-1 times
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int length(node* head){

    node* temp=head;
    int l=0;                            //Here it is zero cause it will traverse till last element and once after that, in which it will become NULL
    while(temp!=NULL){                  //Loop will run for number of nodes times
        temp=temp->next;
        l++;
    }

    return l;
}

int intersection(node* &head1, node* &head2){               //This will return the position of intersection
    
    int l1=length(head1);
    int l2=length(head2);

    //Created two pointer to traverse over both linked list
    int d=0;
    node* ptr1;                     //Pointer one will traverse over the lasger linked list
    node* ptr2;

    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(d){                               
        ptr1=ptr1->next;
        if(ptr1==NULL){                     //Case when it becomes NULL, hence no intersection possible, return -1
            return -1;
        }
        d--;
    }
    //Now both linked list will have same length or same nodes left

    while(ptr1!=NULL  &&  ptr2!=NULL){

        if(ptr1==ptr2){
            return ptr1->data;              //OR we can also write ptr2->data, since both are same
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        
    }

    return -1;
}


void insertAttail(node* &head, int val){

    node* n= new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
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

    node* head1=NULL;
    node* head2=NULL;
    insertAttail(head1,1);
    insertAttail(head1,2);
    insertAttail(head1,3);
    insertAttail(head1,4);
    insertAttail(head1,5);
    insertAttail(head1,6);
    insertAttail(head2,9);
    insertAttail(head2,10);
    intersect(head1, head2, 3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;


    return 0;
}