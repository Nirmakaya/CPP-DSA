#include<bits/stdc++.h>   // A new library is included which includes input output and function creation
using namespace std;

int sum(int n){
    int ans=0;                      
    for(int i=1;i<=n;i++){
        ans += i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<sum(n);

    return 0;
}