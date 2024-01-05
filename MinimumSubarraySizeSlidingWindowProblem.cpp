#include<iostream>
using namespace std;

int smallestSubarrayWithSum(int arr[], int n, int x){

    int sum=0, minLength = n+1 , start=0, end=0;  //minLength is initialised as a invalid number n+1, since all the answer will be smaller than that

    while(end < n){

        //Adding elements to sum
        while(sum <= x && end<n){
            sum += arr[end++];
        }

        while(sum >x && start<n){
            if(end - start < minLength){
                minLength = end-start;
            }
            sum -= arr[start++];
        }
    }

    return minLength;
}

int main(){

    int arr[] = {1, 4, 45, 6, 10, 19};
    int x= 51;
    int n=6;

    int minlength = smallestSubarrayWithSum(arr, n, x);

    if(minlength == n+1){
        cout<<"No such subarray exists"<<endl;
    }else{
        cout<<"Minimum Subarray is : "<<minlength<<endl;
    }

    return 0;
}
