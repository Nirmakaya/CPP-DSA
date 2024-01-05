#include<iostream>
using namespace std;

int fact(int n){                  // Factorial function Datatype will be int beacuse it gives range of integers and Here varaible name n can be used again in main function

    int factorial=1;            // Standard code to find factorial of a number
    for(int i=2;i<=n;i++){          // Here i will start from 2 since 1 is alredy the intialised value
        factorial*=i;
    }
    return factorial;               //Instead of writting cout we have written return for the output

}

int main(){

    int n;
    cin>>n;

    int ans= fact(n);
    cout<<ans<<endl;

    return 0;
}