#include<iostream>
using namespace std;

void dec(int n){

    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n){

    if(n==1){
        cout<<"1"<<endl;
        return;
    }

    inc(n-1);                               //Here cout is afterr the recurring function, in stack frame it will first print n=1 and the others will follow
    cout<<n<<endl;
}

//In both Function just the change in place of the recurring function gives different output

int main(){

    int n;
    cin>>n;

    dec(n);
    inc(n);

    return 0;
}