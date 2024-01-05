#include<iostream>
using namespace std;

void subseq(string s, string ans){          //String ans will get printed in every step

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros = s.substr(1);
    int code = ch;                      //This will store the ASCII value of that code

    subseq(ros,ans);
    subseq(ros,ans + ch);
    subseq(ros,ans + to_string(code));          //since code is a numeriv=c value we used to_string() to convert it into string and add it to ans
}

int main(){

    subseq("AB", "");
    return 0;
}