#include<iostream>
using namespace std;

void permutation(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0; i<s.length(); i++){

        char ch=s[i];
        string ros = s.substr(0, i) + s.substr(i+1);        // In s.substr( string will start after this index, and will go this )

        //s.substr(i+1) means s.substr(i+1, s.length()), but we don't generally write s.length() in last, it take it by default

        permutation(ros, ans+ch);
    }
}

int main(){

    permutation("ABC", "");
    
    return 0;
}