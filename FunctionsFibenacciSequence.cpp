#include<iostream>
using namespace std;

void fib(int n){                // Here we have written void because the function isn't returning any value it is made just to print
    
    int t1=0;                   //Standard code of fibenacci Series
    int t2=1;
    int nextTerm;

    for(int i=1; i<=n; i++){                
        cout<<t1<<endl;                     // Here cout is before because we have to start printing from 0
        nextTerm = t1+t2;
        t1=t2;                              // Here t1 will become n and get printed and then t2 will get changed to the sum of numbers which will get printed in next iteration
        t2= nextTerm;
    }
    return;
}


int main(){

    int n;
    cin>>n;

    fib(n);             // A semicolon is added at the end  of a FUNCTION. Which is rare,which marks end of statement. cout is not there in main code since the function will print and will not give any value

    return 0;
}