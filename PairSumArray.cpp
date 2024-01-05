#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int k){              //Standard code for pairsum check with O(n^2)

    for(int i=0;i<n-1;i++){                     //To form all the possible pairs of the array
        for(int j=i+1;j<n;j++){
            if( arr[i] + arr[j] == k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[] = {2,4,6,7,8,9};
    int k=15;

    cout<<pairsum(arr,6,k);


     
    return 0;
}