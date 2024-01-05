#include<iostream>
#include<math.h>            //Header file to include function used to calculate power of a given number
using namespace std;

//Armstrong is 153 and sum of their cubes is also 153 i.e 1^3 + 5^3 + 3^3 = 1+125+27 = 153

int main(){

    int n;
    cin>>n;

    int sum=0;          // it is important to create sum to have a number 0 or something to add to in the first iteration
    int originaln=n;     //Since we will exhuast the value of n,but we have to use n in last step

    while(n>0){
        int lastdigit= n%10;             //Since we don't know the first digit but we can know the from last digit
        sum+= pow(lastdigit,3);         // It is a function to find any power pow(number, power)
        n=n/10;
    }

    cout<<sum<<endl;

    if(sum == originaln){                
        cout<<"Number is Armstrong"<<endl;
    } 
    else{
        cout<<"Number is not Armstrong"<<endl;
    }
    
    return 0;
}