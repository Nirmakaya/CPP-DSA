#include<iostream>
using namespace std;

#define n 100               //Predefining the value of n, it is written without ";" like #include header file

class stack{

    int* arr;                   //Dynamically created array
    int top;

    public:
    stack(){
        arr=new int[n];             //To allocate memory to the array
        top=-1;                     //Initially top is -1 means no element in stack
    }

    //Push Operation
    void push(int x){

        if(top==n-1){
            cout<<"Stack Overflow"<<endl;               //This means we casnnot add any new element in the memory, since stack is full
            return;
        }

        top++;
        arr[top]=x;
    }

    //Pop Operation
    void pop(){

        if(top==-1){                                    //Case when the stack is already empty
            cout<<"No Element to pop"<<endl;
            return;
        }
        top--;          //This will decrese top, and the last element of array will become useless since we can only access till top
    }

    int Top(){                  //This we have created with Top with capital 'T'. Because data member and member function boths name cannot be same

        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool empty(){
        return top==-1;
    }

};

int main(){

    stack st;
    //We push some elements
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;


    return 0;
}