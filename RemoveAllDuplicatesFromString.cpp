#include<iostream>
using namespace std;

string removeDup(string s){

    if(s.length()==0){
        return "";                  //This will return an empty string and rest of the recurssive function will add to it
    }

    char ch=s[0];
    string ans = removeDup(s.substr(1));

    if(ch==ans[0]){                     //First element will check with the removeDup() and if same it will remove s[0]
        return ans;
    }else{
        return ch+ans;                  //Addition of string
    }
}
int main(){

    cout<<removeDup("aaabbbccceeedddfadg");

    return 0;
}