#include<iostream>
using namespace std;

// Sieve of Erathothenes : output prime number by removing all the non-prime numbers. Here we creating a array, since we cannot allocate the array dynamically

void primeSieve(int n){

    int prime[100] = {0};

    for(int i=2;i<=n;i++){                  //Since prime number of starts from 2
        if(prime[i]==0){                        //Since after the first primes are marked we want to skip it in next iteration
            for(int j=i*i;j<=n;j+=i){                //Here we will start from i^2 and mark all the i^2 numbers. For multiples of i, j is  j= j+=i
                prime[j] = 1;                       //All prime numbers are marked
            }
        }
    }

    for(int i=2;i<n;i++){                       //Here i starts from 2 because 0 and 1 are not prime, and we have not marked it either
        if(prime[i]==0){                    //Means it is unmarked and that is prime
            cout<<i<<" ";
        }
    }

}

int main(){

    int n;
    cin>>n;

    primeSieve(n);

    return 0;
}