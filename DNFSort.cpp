#include<iostream>
using namespace std;

//Time Complexity = O(max(A)) && O(n) which becomes O(n)

void swap(int arr[], int i, int j){

    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}


void dnfSort(int arr[], int n){

    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){

        if(arr[mid]==0){
            swap(arr,low,mid);                  //Here low will be swaped with mid
            mid++;  low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{                                   //When mid is equal to 2, swap with high number and high-- or n-1 minus one
            swap(arr,mid,high);
            high--;
        }
    }

}

int main(){

    int arr[]={1,0,2,1,0,1,2,1,1,2};

    dnfSort(arr,9);

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}