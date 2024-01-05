#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
     
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    
    //Standard code for insertion sort

    for(int i=1; i<n; i++){                 //Since we start from 1st and not 0th element         
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;               //Since j will get j-- and we will insert hence j+1
    }

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}