#include<iostream>
using namespace std;

// 2-D arrays are matrixes which have rows and column. Matrixes are consider as the "Concatenation" of 1D arrays.

int main(){

    int n,m;
    cin>>n>>m;
    int Arr[n][m];

    for(int i=0;i<n;i++){                   //Initialisation of Matrix
        for(int j=0;j<m;j++){
            cin>>Arr[i][j];               //A row in which columns input are asked and then the following row
        }
    }

    // cout<<"Matrix is : \n";                     //To print the marix
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<Arr[i][j]<<" ";
    //     }cout<<endl;
    // }

    int x;                      //To find a 2-D array
    cin>>x;

    bool flag = false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(Arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"Element is found\n";

    }else{
        cout<<"Element is not found\n";
    }

    return 0;
}