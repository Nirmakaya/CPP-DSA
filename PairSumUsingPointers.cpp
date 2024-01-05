#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int k){

    int low=0;                  //First we will declare the both pointers which is index 
    int high=n-1;

    while(low<high){
        if(arr[low]+arr[high] == k){
            cout<<low<<" "<<high<<endl;
            return true;
        }else if(arr[low]+arr[high]>k){
            high--;
        }else{
            low++;
        }

    }
    return false;
}

int main(){

    int arr[] = {1,2,3,4,5,6};              //For this array must be sorted
    int k = 11;

    cout<<pairsum(arr,6,11)<<endl;


    return 0;
}