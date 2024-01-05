#include<iostream>
using namespace std;

//Positive Number Check

int main(){

    int n;
    cin>>n;

    // while(n>0){                  //Here if the first input is negative then this loop will not even get executed once
    //     cout<<n;
    //     cin>>n;
    // }

    do{
        cout<<n<<endl;
        cin>>n;
    } while(n>0);  // We use semicolon at the end of dowhile loop
   
    
    return 0;
}