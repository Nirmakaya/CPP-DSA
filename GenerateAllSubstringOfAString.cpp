#include<iostream>
using namespace std;

void subSeq(string s, string ans){              //In the seond we will send a ans string starting from "" an empty string

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros = s.substr(1);

    subSeq(ros,ans);
    subSeq(ros,ans+ch);
}

int main(){

    subSeq("ABC", "");                  //The answer will first print an empty string
    return 0;
}