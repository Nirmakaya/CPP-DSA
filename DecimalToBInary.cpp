#include<bits/stdc++.h>
using namespace std;

int DecimaltoBinary(int n){             // Data type is int since bool will give only once 0 and 1

    int ans=0;                  // ans and x initialisation is the stnadard algorithm for conversions
    int x=1;

    while(x<=n){                //To find highest power of 2 w.r.t  x
        x*=2;                  
    }
    x/=2;              // Since if number is 12 then it will go till 16

    while(x>0){                 //To check each binary bits till x becomes zero

        int lastDigit = n/x;            // The division will be either 1 or 0, and that will become the last didgit of binary number
        n -= lastDigit*x;               // n will be decresed
        x/=2;                           // x will be decreased
        ans = ans*10 + lastDigit;           //To print binary as interger is, we increase it to power 10

    }
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    cout<<DecimaltoBinary(n)<<endl;

    return 0;
}