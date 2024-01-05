#include<iostream>
using namespace std;

#define n 20

//Queue : It is a Data Structures, it follows FIFO or first in first out. it has a front, back.

//Array Implementation
class queue{

    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int[n];
        front=-1;
        back=-1;
    }

    void push(int x){                       //It is also known as enqueue

        if(back==n-1){
            cout<<"Oueue Overflow"<<endl;
            return;
        }

        back++;
        arr[back]=x;

        if(front==-1){
            front++;
        }
    }

    void pop(){                             //it is also known as dequeue

        if(front==-1  || front>back){
            cout<<"No element in Queue"<<endl;
            return;
        }
        front++;
    }

    int peek(){                                 //it gives a peek to the front most element
        if(front==-1  ||  front>back){
            cout<<"No element in Queue"<<endl;
            return -1;
        }

        return arr[front];
    }

    bool empty(){
        if(front==-1  ||  front>back){
            return true;
        }
        return false;
    }

};




int main(){

    queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;



    return 0;
}