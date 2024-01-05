#include<iostream>
#include<climits>
using namespace std;

//Brute Force approach Time Complexity O(n^3)

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int MaxSum = INT_MIN;               //To have a variable where maximum values will be stored

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                
                sum += a[k];
                
                MaxSum = max(MaxSum, sum);

                //  cout<<" "<<a[k];          to print the subarrays

            }  //cout<<endl;
        }
    }

    cout<<MaxSum<<endl;

    return 0;
}