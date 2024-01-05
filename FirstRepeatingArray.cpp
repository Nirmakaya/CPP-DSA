#include<bits/stdc++.h>
#include<climits>
using namespace std;

//Amazon and Oracle Question

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    const int N = 1e6+2;            //Const means nobody can change the value N in fuyure or else it will declare error, 1e6+2=10^6
    int idx[N];
    

    for(int i=0;i<N;i++){
        idx[i]=-1;
    }

    int minidx= INT_MAX;            //for minimum we have declared a very large number or maximum integer

    for(int i=0; i<n; i++){

        if(idx[arr[i]]  != -1){

            minidx= min(minidx, idx[arr[i]]);

        }else{

            idx[arr[i]]=i;
        }
    }

    if( minidx == INT_MAX ){
        cout<<"-1"<<endl;                       //To give answer with array starting index 1
    }else{
        cout<<minidx+1<<endl;
    }

    return 0;
}