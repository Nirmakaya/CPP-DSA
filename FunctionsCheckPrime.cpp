#include<iostream>
#include<math.h>                    //OR #include<cmath>
using namespace std;

// Function  returntype name(parameter1,parameter2......){
//     function body
// }
// the parameter has to be written with it's datatype and when we will call the function we will write only variable but no data type

// Whenever a program is executed main function will bydefault get executed

// When a function is created a memory is Allocated which is called "Stack" 

// In a function "Local Variables" are created in parameter that gets "Destroyed"

// When the function return the value then the function is terminated

bool isPrime(int num){       // A function of datatype bool is created since it will return only 0,1.

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;               // This terminates the whole function and not just loop, So there is no need of break
        }
    }
    return true;                        // Since the function will get terminated if number is prime there is no need to check if i==n or not
}


int main(){
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }

    }

    return 0;
}