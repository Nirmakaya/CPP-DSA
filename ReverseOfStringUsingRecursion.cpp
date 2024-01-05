#include<iostream>
// #include<string>
// #include<algorithm>
using namespace std;

void reverse(string s){

    if(s.length()==0){          //base condition
        return;
    }

    string ros = s.substr(1);      //Recursive condition

    //s.string(i) will store all the string after ith element, hence it will remove the 1st element or 0th index element
    reverse(ros);               //This will get till the last element of string first
    cout<<s[0];

    //First the recursion is till last element then it starts to print

}

int main(){

    string s;
    cin>>s;

    reverse(s);
    
    return 0;
}