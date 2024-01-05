#include<iostream>
using namespace std;


// Reverse is 1234 becomes 4321

int main(){

    int n;
    cin>>n;

     int reverse=0;         // A variable created to store reversed number
     while(n>0){                // Standard code to reverse a number

        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n=n/10;                 //To update n and remove it's last digit to get new last digit. For this n is divided by 10 and last number wll be removed since the data type is integer and not float
     }

     cout<<reverse<<endl;

    return 0;
}