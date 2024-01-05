#include<iostream>
using namespace std;

//A function created to check if the next tile is possible or not
bool isSafe(int** arr, int x, int y, int n){        //int** arr is dynamically initialised array, here arr is written in function without the square bracket arr[]


    if(x<n && y<n && arr[x][y]==1 ){
        return true;
    }
    return false;
}

bool ratinMaze(int** arr, int x, int y, int n, int** solArr){

    if( x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;

        if(ratinMaze(arr,x+1,y,n,solArr)){              //Check for move one step downward in x
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;                 //We have returned backto the initial step, This is Backtracking
        return false;
    }
    return false;
    
}





int main(){

    int n;
    cin>>n;

    int** arr=new int*[n];      //New way to allocate array dynamically, system will create a square matrix of value n

    for(int i=0;i<n;i++){           //This allocates space for each 1-D array

        arr[i]= new int[n];

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int** solArr=new int*[n];

    for(int i=0;i<n;i++){
        solArr[i]=new int[n];

        for(int j=0;j<n;j++){           //To Give value to the solArr so that the compiler doesn't give a garbage value
            solArr[i][j]=0;
        }
    }

    cout<<endl;

    if(ratinMaze(arr, 0, 0, n, solArr)){

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                cout<<solArr[i][j]<<" ";

            }cout<<endl;
        }
        
    }


    return 0;
}