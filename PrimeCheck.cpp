#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i;          // declared outside for loop, so can be used after for loop

    //Check by dividing all number till n-1.
    for(i=2; i<n; i++){     //basic condition for checking prime, i<n means loop will run from i=2 to n-1 times
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            break;
        }
    }
    
    if(i==n){       //Ensures i has completed the full execution of for loop; since at last i=n
        cout<<"Prime"<<endl;    
    }
        
    return 0;
}