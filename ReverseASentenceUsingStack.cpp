#include<iostream>
#include<stack>                     //C++ has a STL of stack already
using namespace std;

//A simple application of stack

void reverseSentence(string s){

    stack<string> st;

    for(int i=0; i<s.length(); i++){

        string word="";
        while(s[i]!=' '  &&  i<s.length()){

            word+=s[i];
            i++;

        }
        st.push(word);                      //This will store the sentence's every word in LIFO= last in first out, format
    }

    while(!st.empty()){                     //To print the stack in LIFO format
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;


}

//We can implement stack using arr or linked list or we can use the STL. Application of Stack

int main(){

    // stack<data type> name;           This will create a stack 

    string s="Hey, how you doing?";

    reverseSentence(s);


    return 0;
}