#include<iostream>
#include<stack>
using namespace std;

// Redundant : means extra and paranthesis is brackets

int main(){

    string s;
    cin>>s;
    stack<char> st;

    bool ans=false;

    for(int i=0;i<s.length();i++){

        if(s[i]=='+' || s[i]=='-' || s[i]=='*'  || s[i]=='/'){

            st.push(s[i]);           

        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){

            if(st.top()=='('){              //A paranthesis without any operator in stack
                ans = true;
            }
            
            while(st.top()=='+' || st.top()=='-' || st.top()=='*'  || st.top()=='/'){
                st.pop();
            }
            st.pop();           //To pop the opening bracket from stack
        }
    }

    cout<<ans;

    return 0;
}