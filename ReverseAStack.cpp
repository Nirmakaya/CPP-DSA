#include<iostream>
#include<stack>
using namespace std;

//We could have done it simpler by creating another stack, but that would be more memory use, hence we use recursion


//To insert At bottom, We will use the concept of Call Stack
void insertAtbottom(stack<int> &st, int ele){

    if(st.empty()){                     //Here Base csae is the crucial main case
        st.push(ele);
        return;
    }

    int topele=st.top();
    st.pop();
    insertAtbottom(st,ele);                      //Here the ele will be the original one, ans st would have become one element less

    st.push(topele);                        //This will reenter the topelement once the given ele is inserted at bottom
}

void reverse(stack<int> &st){                   //Here call is by reference becasue we are making changes in the same stack
    
    if(st.empty()){
        return;
    }

    int ele=st.top();
    st.pop();
    reverse(st);

    insertAtbottom(st, ele);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


    return 0;
}