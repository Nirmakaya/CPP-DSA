#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){  // written by observing column, here in rhombus column are not left alligned
            cout<<"  ";
        }
        for(int k=1;k<=n;k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}