#include<iostream>
using namespace std;


// Subarrays = A part of element in continous sequence
// Subsequence = Derived from array, but order is maintained

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int current=0;          //This will store the values
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            current += arr[j];
            cout<<current<<endl;
            
        }
    }


    return 0;
}