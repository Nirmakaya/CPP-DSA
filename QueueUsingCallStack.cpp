#include<iostream>
#include<stack>
using namespace std;

 // Call Stack : the in-built function call stack

//Recursive Call - Using Call Stack
class queue{

    stack<int> s;

    public:
    void push(int x){
        s.push(x);
    }

    int pop(){
        if(s.empty()){
            cout<<"Queue underflow"<<endl;
            return -1;
        }

        int x=s.top();
        s.pop();

        if(s.empty()){                  //Base Case
            return x;
        }
        
        int item = pop();               //Recursive call
        s.push(x);                      //This will push everything back to stack

        return item;                //This will return the answer of pop()
    }

    bool empty(){
        if(s.empty()){
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

    cout<<q.pop()<<endl;

    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}