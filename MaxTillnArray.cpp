#include<iostream>
using namespace std;

// Non-Decresing Array : max till n will have either same or incresed number but never decreased. It is called "Non-Decreasing"

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    int mx= -1999999;               //Taken a very small number since we need to increment it, and elements can be negative

    for(int i=0; i<n; i++){

        mx = max(mx,arr[i]);            
        cout<<mx<<endl;

    }

    return 0;
}