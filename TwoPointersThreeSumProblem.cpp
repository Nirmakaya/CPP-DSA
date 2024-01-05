#include "bits/stdc++.h"
using namespace std;

/* Two Pointer : In brute force approach, 3 for loop will be used O(n^3). 
 * In two pointers first we will sort the array so O(nlogn) and then the O(n^2) for loops.
 * Total time complexity : O(n^2)
 */

int main(){

    int n;
    cin>>n;
    int target; cin>>target;

    vector<int> a(n);
    for(auto &i: a)
        cin>>i;

    sort(a.begin(), a.end());

    bool found=false;

    for(int i=0;i<n;i++){

        int lo=i+1,  hi=n-1;             //Two Pointers

        while(lo<hi){

            int current = a[i] + a[lo] + a[hi];             //Here we use int names like current, target, found

            if(current == target){
                found =true;
            }
            //if and not else if
            if(current<target){
                lo++;                           //Since the array is sorted so the lo pointer ins=dex will increase to find bigger elements
            }
            else{
                hi--;
            }
        }
    }

    if(found){
        cout<<"True";
    }else{
        cout<<"false";
    }  

}