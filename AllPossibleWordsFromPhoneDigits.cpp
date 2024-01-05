#include<iostream>
using namespace std;

string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};            //We need to acess it to the function. Hence, we have declared it outside main

void keypad(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string code = keypadArr[ch-'0'];                //Since ch is a character so we minus '0' from it and this will minus the ASCII character and and give integer '2'-'0'= int 2
    string ros = s.substr(1);

    for(int i=0; i<code.length();i++){
        keypad(ros, ans + code[i]);
    }


}

int main(){

    keypad("23", "");

    return 0;
}