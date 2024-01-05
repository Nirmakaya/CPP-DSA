#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int j;
        for(j=1; j<=n-i;j++){
            cout<<"  ";
        }
        int k=i;                            // New varaible k is initialised because we have to print from i
        for(;j<=n;j++){          // Here the j initialisation is removed and left blank.This will automatically use the last value of j from above for loop i.e n-i and adds 1 
            cout<<k--<<" ";
        }
        k=2;                        // k is made 2 due to the pattern of elements of palindrome
        for(j=n+1;j<=n+i-1;j++){            // Here instesd of leaving blank i have added 1 which does the same thing
            cout<<k++<<" ";
        }
        cout<<endl;

    }

    return 0;
}