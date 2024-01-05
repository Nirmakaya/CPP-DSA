#include<iostream>
using namespace std;

int findPeakElement(int arr[], int low, int high, int n){

    int mid = low + (high-low)/2;               //This way the mid value won't cross the interger limits

    // mid == 0 and mid==n-1 are to protect arr[mid-1] and arr[mid+1] from giving error
    if( (mid==0 || arr[mid-1] <= arr[mid] )  &&  ( arr[mid+1] <= arr[mid]  || mid==n-1)){
        return mid;
    }

    //Left half case
    else if( mid>0 && arr[mid-1]>arr[mid]){
        return findPeakElement(arr, low, mid-1, n);
    }

    //Right half case
    else{
        return findPeakElement(arr, low, mid+1, n);
    }
}

int main(){

    int arr[] = {0, 6, 8, 5, 7, 9};

    int n=6;

    cout<<"Peak Element Index : "<<findPeakElement(arr, 0, n-1, n);


    return 0;
}
