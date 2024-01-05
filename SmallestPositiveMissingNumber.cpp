#include<iostream>
using namespace std;

// Question of amazon,samsung,snapdeal,accolite

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){

        cin>>a[i];
    }

    const int N = 1e6 +2;
    bool check[N];

    for(int i=0;i<N;i++){                     // We make a very big number because the elements of the array can be very large
        check[N] = false;                   // False or 0
    }

    for(int i=0;i<n;i++){

        if(a[i] >= 0){
            check[a[i]] = true;             //True or 1
        }
    }

    int ans=-1;

    for(int i=1; i<N; i++ ){                //Since we need to check from positive number hence 0 is not there

        if(check[i] == 0){
            ans=i;
            break;
        }

    }
    cout<<ans<<endl;
    return 0;
}