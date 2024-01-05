#include<iostream>
using namespace std;

//The maximum array will come up just like a bubble does

int main(){

    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0; i<n; i++){
         cin>>arr[i];

    }

    int counter=1;          //This is initialised as 1 because at ith iteration we would check for n-ith times and n-1 is the start            

    while(counter<n){                     //this first iteration the loop will sort for n-1. and so on n-2,n-3,n-4...
        for(int i=0; i<n-counter; i++)      // At ith iteration n-i checks will be there
            if(arr[i]>arr[i+1]){                     //Standard code for swaping
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        counter++;              //Sice last element of array will be sorted and we need to do only n-counter or 1 less search for the next iterations 
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    

    return 0;
}