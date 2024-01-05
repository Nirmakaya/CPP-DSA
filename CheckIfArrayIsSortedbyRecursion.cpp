#include<iostream>
using namespace std;

bool sorted(int arr[], int n){

    if(n==1){                   //Base condition : Means if set becomes 1 then it will be bydefault be sorted
        return true;
    }

    bool restArray = sorted(arr+1, n-1);                //arr+1 means now that array will start from 1th index and hence size becomes on less n-1

    if(arr[0]<arr[1]  && restArray){                //At every recursion the 0th index will change. it will be one element ahead
        return true;
    }else{
        return false;
    }

}


int main(){

int arr[]= {1,2,3,4,5,6};

cout<<sorted(arr, 6);

    return 0;
}