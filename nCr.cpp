#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*= i;
    }
    return factorial;
}

int main(){

    int n,r;
    cin>>n>>r;

    int nCr= fact(n)/(fact(r)*fact(n-r));           //Here functions are very significant but that we have calculated nCr easily
    cout<<nCr<<endl;

    return 0;
}