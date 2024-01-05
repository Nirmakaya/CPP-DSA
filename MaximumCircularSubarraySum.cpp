#include<iostream>
#include<climits>
using namespace std;

//Contributing Elements : Elements which contribute in maximum sum of subarrays and vice-versa

int kedane(int a[], int n){
    
    int currentSum=0;
    int maxSum= INT_MIN;

    for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum<0){
            currentSum=0;
            
        }
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}


int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int wrapsum;            //Variable to store sum of all the contributing elements
    int nonwrapsum;         //Variable to store sum of all the non-contributing elements

    nonwrapsum = kedane(a, n);           //Since non wrap sum or Contributing elements sum can directly be find out with kedanes algorithm

    int totalsum=0;
    for(int i=0;i<n;i++){

        totalsum+=a[i];
        a[i]=-a[i];                      //All the sign of elements of array are reversed to find non-contributing elements sum which will be used in finding wrapsum

        wrapsum = totalsum + kedane(a,n);       // Here [toatalsum - -kedane] becomes positive, and in kedane array a[] will go with all the negative elemnets

        // Here kedane(a,n) will give sum of noncontributing elemnsts and not nonwrapsum
    }


    cout<<max(wrapsum,nonwrapsum);


    return 0;
}