#include<iostream>
using namespace std;

//Very important questions

int unique(int arr[], int n){

    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];           //This will xor every element and the same elements will get cancelled or zero, and only the unique element will remain
    }

    return xorsum;
}

int main(){

    int arr[]={1,2,3,2,1};
    cout<<unique(arr,5);


    return 0;
}