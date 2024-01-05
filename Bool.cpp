#include<iostream>
#include<cmath>                                 //This header file contains sqrt functions
using namespace std;

int main(){

    int n; 
    cin>>n;

    bool flag=0;

    for(int i=2; i<=sqrt(n); i++){           //Here instead of i<n we have used sqrt of n which check prime with less iterations/smaller time
        if(n%i==0){
        cout<<"Not Prime"<<endl;
        flag=1;
        break;
        cout<<"Test1";              //This statement will not get executed since loop is terminated by break statement
        }
    }

    if(flag==0){
        cout<<"Prime";
    }
    

    return 0;
}