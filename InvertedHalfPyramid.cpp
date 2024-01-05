#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=n; i>=1; i--){             // i is in decrement
        for(int j=1; j<=i; j++){        // Here we have used i of for loop to define j of nested for loop
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}