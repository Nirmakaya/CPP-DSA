#include<iostream>
using namespace std;

 // to find sum from 0 to the given number
 
int main(){

    int n;
    cin>>n;

   
    int sum=0;
        for(int counter=1; counter<=n; counter++){      //Here we don't have to write semicolon like for(i++;). Semicolon is only to seperate the parameters. Here i++ is the last parameter.

        sum=sum+counter;
    }

    cout<<sum;

    return 0;
}