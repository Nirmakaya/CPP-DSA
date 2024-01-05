#include<iostream>
using namespace std;

//Selection Sort

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    //There are many methods of sorting, here we will compare elements i and j and swap it to have ascending or descending order sorting

    for(int i=0; i<n-1; i++){               //i checks from first to second last element, since last one will be already sorted anyway
        for(int j=i+1; j<n; j++){                  // j is from second element to last element

            if(arr[j] < arr[i]){

                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }


        }

    }

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    } cout<<endl;                       //Here endl is written outside the loop to avoid repetitive line change



    return 0;
}