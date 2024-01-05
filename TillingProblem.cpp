#include<iostream>
using namespace std;

int tillingWays(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return tillingWays(n-1) + tillingWays(n-2);         //One for Horizontal and One for vertical

    //This Recursive function is similar to fibonachi Series
}

int main(){

    cout<<tillingWays(4);

    return 0;
}