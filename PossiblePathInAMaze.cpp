#include<iostream>
using namespace std;

int countPathMaze(int n, int i, int j){         //Here we have to have i and j iterateor since we will send it each time to the recurssive functions

if(i==n-1 && j==n-1){              //Assume start as to (0.0) hence end (n-1,n-1)
    return 1;
}

if(i>=n || j>=n){                   //A not possible case

    return 0;

}

return countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1);

}


int main(){

    cout<<countPathMaze(3, 0, 0);

    return 0;
}