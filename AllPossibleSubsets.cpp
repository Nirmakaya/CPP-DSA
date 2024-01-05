#include<iostream>
using namespace std;

void subsets(int arr[], int n){

    for(int i=0;i< (1<<n); i++){            // (1<<n) is 2^n. iterate from 1 to 2^-1 for every subset number, starting from 0 number or Null set
        for(int j=0;j<n;j++){               //this loop will traverse over evry binary digit if ingoing i and check for ones by getBit method

            if( i & (1<<j)){                //getBit function will check for one at every bit position of that number
                cout<<arr[j]<<" ";               //If one then that jth index element will be printed int this ongoing subset of i
            }

        }cout<<endl;

    }
}

int main(){

    int arr[4] = {2,3,4,5};

    subsets(arr, 4);            //We have only called and cout is included in the function already
    
    return 0;
}