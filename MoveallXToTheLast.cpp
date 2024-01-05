#include<iostream>
using namespace std;

string moveallX(string s){

    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = moveallX(s.substr(1));

    if(ch=='x'){
        return ans+ch;
    }
    
    return ch+ans;              //Here instead of writing else we have only written return, Since else is not needed
    
}

int main(){

    cout<<moveallX("xhdhxkdifxxxyrhx");
    return 0;
}