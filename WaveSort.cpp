#include<iostream>
using namespace std;

/*Question asked in Google and Amazon Interview

*Time Complexity : O(n/2) since the for loop is actually running for n/2 time. And O(n/2) becomes O(n).

*/

void swap(int arr[], int i, int j){

    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void waveSort(int arr[], int n){

    for(int i=1; i<n; i+=2){                    //Here i stars from 1 since we need to check from i-1, to n-1, with jumps of 2 since fore the wave pattern

        if(arr[i]>arr[i-1]){ 

            swap(arr,i,i-1);
             
        }

        if(arr[i]>arr[i+1]  &&  i<=n-2){                    //i should be not more than n-2 since if itbecome n-1 then there is no i+1 to check

        //i<=n-2, Else it will give a error
            
            swap(arr, i, i+1);
        }

    }
    
}

int main(){

    int arr[]={1,3,4,7,5,6,2};

    waveSort(arr,7);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}