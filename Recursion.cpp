#include<iostream>
using namespace std;

//Recursion : when a function calls itself to make it's problems easy or smaller

 /* Stack overflow : Memory stack is fixed, repeated call of functions or during recursion would result in a "Stack Overflow"

*/

//Sum till n number using recursion

int Sum(int n){

    if(n==0){
        return 0;                       //This is base condition when Sum(n-last, 0)
    }

    int prevSum = Sum(n-1);
    return n + prevSum;
}


//Power of a number using recursion

int power(int n, int p){

    if(p==0){
        return 1;
    }

    int prevPower =  power(n, p-1);
    return n*prevPower;
}


//Factorial of a given number using fibonacci

int factorial(int n){

    if(n==0){
        return 1;
    }

    int prevFactorial = factorial(n-1);
    return n*prevFactorial;

}

int main(){

    // int n;
    // cin>>n;

    // cout<<Sum(n)<<endl;

    // int a,b;
    // cin>>a>>b;

    // cout<<power(a,b);

    int fact;
    cin>>fact;

    cout<<factorial(fact)<<endl;

    return 0;
}


