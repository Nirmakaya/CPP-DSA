#include<iostream>
using namespace std;

//Inclusion-Exclusion Principle : Here we will print number of one set and another set and we will subtract the set which is common in both

int divisible(int n, int a, int b){

    int c1=n/a;                 //This divisible gives all the count of numbers which will be divisible by a in n
    int c2=n/b;

    int c3=n/(a*b);             //Common numbers which are divisible by both

    

    return c1+c2-c3;
}

int main(){

    int n,a,b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b)<<endl;

    return 0;
}