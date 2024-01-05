#include<iostream>
using namespace std;

int main(){

    float n1,n2;
    cout<<"Input 2 Numbers: "<<endl;
    cin>>n1>>n2;
    
    char op;
    cout<<"Input the operator: "<<endl;
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<n1+n2<<endl;
            break;

        case '*':
            cout<<n1*n2<<endl;
            break;

        case '-':
            cout<<n1-n2<<endl;
            break;

        case '/':
            cout<<n1/n2<<endl;
            break;

        default:
            cout<<"Try Another Operator"<<endl;
            break;

    }

    return 0;
}