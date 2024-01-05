#include<iostream>
using namespace std;

void maxSubarraySum(int arr[], int n, int k, int x){

    int sum =0;
    int ans;

    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    // ans initialising with first sum bydefault instead of 0
    if(sum<x){
        ans = sum;
    }

    //Sliding Window
    for(int i=k; i<n; i++){
        sum = sum - arr[i-k];
        sum = sum + arr[i];

        if(sum < x){
            ans = max(ans, sum);
        }
    }

    cout<<ans<<endl;

}

int main(){

    int arr[] = {7, 5, 4, 6, 8, 9};

    int k =3, x=20, n=6;

    maxSubarraySum(arr, n, k, x);
    return 0;
}