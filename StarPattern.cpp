#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){                  // Here row number starts from 1
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){          // Here stars number is odd so we can use 2*n-1 or 2*n+1
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){              // Here row number starts from n instead of 1. So, i=n from start and loop is decremental i-- 
        for(int k=1; k<=n-i; k++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}