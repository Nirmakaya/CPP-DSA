#include<iostream>
#include<vector>
using namespace std;

//Here we will find the longest contiguous subarray which has zeros equal to k.
// Here we have used the concept of sliding window using two pointers

int main(){

    int n; cin>>n;
    int k; cin>>k;

    vector<int> a(n);

    for(auto &i: a)
        cin>>i;

    int zerocnt=0;
    int ans=0;

    int i=0;            //Here two pointers approach is used, i is starting pointer and j is ending pointer


    for(int j=0;j<n;j++){

        if(a[j]==0){                //if there is 0 zero count is incremented
            zerocnt++;
        }
        while(zerocnt>k){
            if(a[i]==0){
                zerocnt--;
            }
            i++;
        }

        //At each step j++ and ans is updated even if both while anf if condition is false

        ans = max(ans, j-i+1);
    }

    cout<<ans;


    return 0;
}