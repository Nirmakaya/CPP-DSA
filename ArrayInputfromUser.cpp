#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int array[n];                       // The input from user will become the size of array

    for(int i=0; i<n; i++){

        cin>>array[i];                  // This will first ask to take n values from users, The values given by user will be stored in that index of array
    }

    for(int j=0; j<n; j++){             //To print the outputs of array

        cout<<array[j]<<" ";                

    }

    return 0;
}