#include<iostream>
using namespace std;

int friendsPair(int n){

    if(n==1 || n==0 || n==2){               //since for n==2, one pair and one both single hance 2 ways
        return n;
    }

    return friendsPair(n-1) + friendsPair(n-2)*(n-1);       //One is for single and other is for pair and multiplied by no. of ways to pair nth person
}

int main(){

    cout<<friendsPair(4);

    return 0;
}