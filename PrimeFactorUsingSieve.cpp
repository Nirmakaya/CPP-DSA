#include<iostream>
using namespace std;

//Prime factors are all the common factor, LCm

void primeFactor(int n){

    int spf[100]={0};                     //We  will create a array which will store the smallest prime factor and we will divide n with it at last

    for(int i=2;i<=n;i++){
        spf[i]=i;                   //First we have made all number smallest prime factor as the number itself then we will sieve out the numbers for which prime factor is not the number itself 
    }


    for(int i=2;i<=n;i++){                  //We have used the concept of prime numbers to found prime factors or LCM
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){           //All the multiples of i will have spf as i, so we will make it i
                if(spf[j]==j){                      //To remove all the already corrected spf numbers
                    spf[j]=i;
                }

            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n]; 
    }
}

int main(){

    int n;
    cin>>n;

    primeFactor(n);

    return 0;
}