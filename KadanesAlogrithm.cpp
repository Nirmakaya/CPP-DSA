#include<iostream>
#include<climits>
using namespace std;

//Here we use kadane's algorithm to make time complexity of maximum sum of subarray O(n) 

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        currentSum += a[i];
        if(currentSum<0){                       //We will make the currentsum zero if the total sum till then becomes negative
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    cout<<maxSum;
    return 0;
}