#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){

            int counter = i;            //you can intialise counter befor for loop also
            cout<<counter<<" ";
            counter++;                  // means 1 will be increment
        }
        cout<<endl;
    }

    return 0;
}