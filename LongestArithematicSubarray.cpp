#include<iostream>
using namespace std;

// Google Kickstart Question

// "Intution and Approach"

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans=2;                      //The final answer will have atleast two subarrays
    int pd=arr[1]-arr[0];           //Previous common difference
    int j=2;                        //Initialised since j is used in while loop, and j=2 since 1st case is there in pd
    int curr=2;                     //Current streak array's common difference

    while(j<n){

        if( pd == arr[j]-arr[j-1]){
            curr++;

        }else{

            pd = arr[j]-arr[j-1];
            curr=2;                         //Since the streak is broken, new will have atleast two elements
        }

        ans= max(ans, curr);

        j++;                                
    }

    cout<<ans<<endl;

    return 0;
}