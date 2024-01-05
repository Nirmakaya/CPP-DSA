#include<iostream>
#include<stack> 
using namespace std;

int prec(char c){                   //An function to give precedence value

    if( c=='^'){
        return 3;
    }
    else if( c=='*' || c=='/'){
        return 2;
    }
    else if( c=='+'  || c=='-'){
        return 1;
    }
    else{
        return -1;                          //This precedence is for bracket, so brackets here will have the least precedence
    }
    
}

string infixtoPostfix(string s){

    stack<char> st;
    string res;                     //Here we have not initialised it with "" but it works fine

    for(int i=0;i<s.length();i++){

        if(s[i]>='a' && s[i]<='z'  ||  s[i]>='A'  &&  s[i]<='Z'){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){

            while(!st.empty()  &&  st.top()!='('){              //Here the empty condition is first and crucial since if the stack is not empty only then we can check for st.top() element
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){                //Important to add this, and we are adding these often
                st.pop();
            }
           
        }
        else{
            while(!st.empty()  &&  prec(st.top())>prec(s[i])){              //case when the current index prcedence is greater than the topmost element of stack
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){             //Check if the stack is already empty or not
        res+=st.top();
        st.pop();
    }

    return res;
}

int main(){

    cout<<infixtoPostfix("(a-b/c)*(a/k-l)")<<endl;


    return 0;
}