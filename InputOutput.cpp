#include<iostream>
using namespace std;

int main(){

    int Amount1;
    cin>>Amount1;
    cout<<"Enter first NUmber : "<<endl; // endl
   
    
    int Amount2;
    cout<<"Enter Second Number : \n";  // \n and endl both do the same job to break line or to end line
    cin>>Amount2;

    int Sum = Amount1+Amount2;
    cout<<"Sum of both number is : \n"<<Sum<<endl;

    return 0;
}