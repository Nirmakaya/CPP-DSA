#include<iostream>
using namespace std;

int main(){

    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};                //We can declare matrix manually like this

// if we swap the whole matrix we will again get the same matrix
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){                           //Since we will swap only upper triangles elements in transpose
            int temp = A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }cout<<"\n";
    }

    return 0;
}