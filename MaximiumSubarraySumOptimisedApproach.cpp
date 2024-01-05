#include<iostream>
#include<climits>
using namespace std;

//Optimised Approach : Cummulative sum approach. Here O(n^2)

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // PrefixSum == is a array in which sum till the previous index is stored

    int currSum[n+1];           // In this approach we have created a new array which will store the sum till ith in the ith element
    currSum[0]=0;               //First element is initialised as 0

    for(int i=1;i<=n;i++){
        currSum[i] = currSum[i-1] + a[i-1];         //Since i starts from 1 hence a[i-1] is used
    }

    int maxSum = INT_MIN;

    //Loops on currSum[n+1] and not on a[n]

    for(int i=1;i<=n;i++){                  // i=1 since i is index of currsum and currSum starts from 1 
        int sum=0;
        for(int j=0;j<i;j++){
            sum = currSum[i] - currSum[j];      // Cummulative Ending point sum - Cummulative Starting point Sum
            maxSum = max(sum, maxSum);
        }
    }

    cout<<maxSum<<endl;

    return 0;
}