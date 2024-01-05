#include<bits/stdc++.h>
using namespace std;

int BinarytoDecimal(int n){                 // Standard Binary to decimal convertion function

    int ans=0;                              // Whenever you need to maintan ans OR add again and again you intiliase it as 0
    int x=1;                                    // Since base has to initalise by one in binary,octal,hexadecimal i^0=1

    while(n>0){

        int y= n%10;
        ans += x*y;
        x *= 2;
        n /= 10;

    }

    return ans;
}


int OctaltoDecimal(int n){              // Standard Octal to decimalconvertion funcion  

        int ans=0;                      
        int x=1;                            

        while(n>0){

            int y= n%10;
            ans += x*y;
            x *= 8;
            n /= 10;
        }

        return ans;
}


int main(){

    int n,m;
    cin>>n>>m;
    cout<< OctaltoDecimal(n)<< endl;
    cout<< BinarytoDecimal(m)<<endl;


    return 0;
}