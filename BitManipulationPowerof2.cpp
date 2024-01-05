#include<iostream>
using namespace std;

//In binary if n is a number then if we flip the rightmost set bit or rightmost 1 and all the elements after that then we will get n-1
//if a number is a square of 2 the it will have only 1 bit as set 8 = 1000
// (n & n-1) = have all bits same as n except the rightmost set bit, that will be zero

bool ispowerof2(int n){
    return (n && !(n & n-1));            //The second n && adresses the case where n is zero, hence to return then zero
}

int main(){

    cout<<ispowerof2(13);            //Here we have checked power of 2 by only two lines


    return 0;
}