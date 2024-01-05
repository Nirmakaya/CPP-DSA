#include<iostream>
using namespace std;

//Matrix Search is an important concept
//In this Matrix search we will do a optimised approach 
//The matrix must be sorted for this

int main(){

    int n, m;
    cin>>n>>m;
    int target;             //Target is the given number to check
    cin>>target;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int c, r;
    r=0;
    c=m-1;

    bool check=false;               //Declared and initialised a boolean flag to mark the answer

    while( r<n  &&  c>=0){              //The time complexity is decresed to O(n)
        if( a[r][c] == target){
            check=true;
        }
        if( a[r][c] > target){              //Since the matrix is sorted
            c--;
        }else{
            r++;
        }
    }

    if(check){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }
    

    return 0;
}