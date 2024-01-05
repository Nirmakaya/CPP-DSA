#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){            // first we will print the stars of starting upper half just like floyd's triangle
            cout<<"* ";
        }
        int spaces= 2*n-2*i;            // A formula of space created by observing the spaces of the question
        for(int j=1; j<=spaces; j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){          // You can use  same variable name j again after completion of first loop, but you have to again intialise it. Here j is used 3 times
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i;j++){
            cout<<"* ";
        }
        int spaces= 2*n-2*i;
        for(int j=1;j<=spaces;j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}