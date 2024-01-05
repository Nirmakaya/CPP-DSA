#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int sum = i+j;                  // Element is 1 when (row,column) sum is even and 0 if (row,coumn) sum is odd
            if(sum%2==0){                   // Using Modular
                cout<<"1 ";
            } else{
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}