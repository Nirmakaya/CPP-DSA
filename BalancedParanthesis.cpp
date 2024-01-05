#include<bits/stdc++.h>
using namespace std;

//Important for interview round Interview Round

bool isValid(string s){

    int n = s.size();

    bool ans=true;

    stack<char> st;

    for(int i=0;i<n;i++){

        if( s[i]== '(' or s[i]== '{' or s[i]=='['){                 //here we have used 'or' instead of || symbol

            st.push(s[i]);

        }else if( s[i]==')' ){

            if(!st.empty()  &&  st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }else if( s[i]==']' ){

            if(!st.empty()  &&  st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }else if( s[i]=='}' ){

            if(!st.empty()  &&  st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }

    if(!st.empty())
        return false;
    

    return ans;
    
}

int main(){

    string s="({[";

    if(isValid(s)){
        cout<<"Valid String";
    }else{
        cout<<"Invalid String";
    }


    return 0;
}