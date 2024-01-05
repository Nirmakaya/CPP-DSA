#include<iostream>  
using namespace std;

// Data type : Memory Allocation 
// Type Modifier : to change length of the data type

int main()  
{
    int a; 
    a=12; 

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool "<<sizeof(d)<<endl;

    short int Si;
    long int li1;
    long long int li2;

    cout<<"size of shortint "<<sizeof(Si)<<endl;
    cout<<"size of longint "<<sizeof(li1)<<endl;
    cout<<"size of longlongint "<<sizeof(li2)<<endl;
    
    cout << "Invoking Pegasus"  << endl;
    return 0;

}

    
