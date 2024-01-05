#include<iostream>
using namespace std;

//Ecluid algorithm to find GCD : It a way to find the GCD or greatest common divisor. We can use prime factor method but euclid's algorithm has better time complexity

//Gcd will be last modulo 

int gcd(int a, int b){

    while(b != 0){
        
        int rem=a%b;
        a=b;                        //In the next iteration, new a will be b and b will be the remainder
        b=rem;                          
        
    }

    return a;
}



int main(){

    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b);

    return 0;
}