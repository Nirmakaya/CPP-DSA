#include<iostream>
using namespace std;

int numberofOnes(int n){

    int count = 0;          //This will count the number of times while loop has iterated

    while(n){                   //This will stop executeing when n becomes zero
    n = n & (n-1);              //This will become zero after iteration equals to the number of times 1 present 
    count++;
    }

    return count;
}

int main(){

    cout<<numberofOnes(19)<<endl;
    
    return 0;
}