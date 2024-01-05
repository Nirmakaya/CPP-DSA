#include<iostream>
using namespace std;

//Linear Search O(n) complexity

int linearSearch(int array[], int n, int key){              // Here array[] with blank is to send the any array to function
    for(int i=0; i<n; i++){                                 //Here i represents the index, this Traverse all the elements 
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    int array[n];

    for(int i=0; i<n; i++){

        cin>>array[i];
    }

    int key;
    cin>>key;

    cout<<linearSearch(array,n,key)<<endl;          //Here array is used without sqaure bracket to send all the arrays values


    return 0;
}