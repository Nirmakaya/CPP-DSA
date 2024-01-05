#include<iostream>
#include<climits>                    //This include INT_MIN and INT_MAX
using namespace std;

int main(){

        int n;
        cin>>n;
        int array[n];

        for(int i=0; i<n; i++){

            cin>>array[i];
        }

        // Minimum interger possible in c++ is INT_MIN

        int maxNo=INT_MIN;          //We have to initialise otherwise c++ will assign a "Garbage Value" to it
        int minNo=INT_MAX;            //We can intialise it with first number of array[0] or we can use INT_MIN and INT_MAX

        // int maxNo has assign min value and vice-versa
        for(int i=0; i<n; i++){
        if(array[i]>maxNo){

            maxNo=array[i];
        }

        minNo= min(minNo,array[i]);   // A better way to write, max() and min() are built in functions
        }


        // OR we can use this
        //  if(array[i]<minNo){

        //     minNo=array[i];
        // }
        cout<<maxNo<<" "<<minNo<<endl;
       

    return 0;
}