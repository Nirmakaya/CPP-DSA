#include<iostream>
#include<queue>
using namespace std;

//Method 1 : Here pop() is Costly

class stack{

    int N;                  //This will indicate the size of our stack
    queue<int> q1;
    queue<int> q2;

    public:
    stack(){
        N=0;                //Initiallt the size would be zero   
    }

    void push(int val){

        q2.push(val);
        N++;                    //After pushing each element we will increse the size by 1

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        //Swapping q1 with q2, using a temp queue
        queue<int> temp=q1;
        q1=q2;
        q2=temp;

    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
    }

    int size(){
        return N;
    }
};

int main(){

    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<< st.top() << endl;
    st.pop();

    cout<< st.top() << endl;
    st.pop();

    cout<< st.top() << endl;
    st.pop();

    cout<< st.top() << endl;
    st.pop();

    cout<<st.size()<<endl;


    return 0;
}
