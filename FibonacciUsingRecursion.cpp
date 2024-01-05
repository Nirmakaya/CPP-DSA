#include<iostream>
using namespace std;

//Fibonacci Sequence : 0 1 1 2 3 5 8 13 21...

int fib(int n){                     //Function to give sum till n fibonacci series

    if(n==0 || n==1){               //Base condition of recursion. Here for fibonacci we take 0 and 1
        return n;
    }

    return (fib(n-1) + fib(n-2));           //Since fib(n)=fib(n-1)+fib(n-2)
}

int main(){

    int n;
    cin>>n;

    cout<<fib(n)<<endl;
    return 0;
}