#include<iostream>
#include<stack>
using namespace std;

/* queue is already include in STL so if we include header file bits/stdc++.h then we need to rename our class queue as something else.
 * if we use iostream then queue is not included and we can write class queue
 * Using stack the enqueue is easy but the dequeue is costly
 * The dequeue happens in FIFO fashion using both stacks
 * there is no front and back, but both stacks combine performs operations like Queue

 */

//Using Two stack
class queue{

    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){                       //This has time complexity of O(1)
        s1.push(x);
    }

    int pop(){                                          //In worst case this will have time complexity O(n)
        if(s1.empty()  and s2.empty()){
            cout<<"Queue is empty\n";
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        }
       
        int topval = s2.top();                  //Here the top value will be the last first value of s1 making it like FIFO
        s2.pop();
        return topval;
    }

    bool empty(){
        if(s1.empty()  and  s2.empty()){
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