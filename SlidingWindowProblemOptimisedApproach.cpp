#include<iostream>
#include<vector>
#include<deque>
using namespace std;

//Time Complexity is O(n) using Deque 

int main(){

    int n,k; cin>>n>>k;

    vector<int> a(n);
    for( auto &i : a){
        cin>>i;
    }

    deque<int> q;
    vector<int> ans;

    for(int i=0;i<k;i++){

        //To ensure that the elements in deque is never in increasing order
        while(!q.empty()  and a[q.back()] < a[i] ){             //deque is storing indices of a
            q.pop_back();
        }
        q.push_back(i);

    }
    ans.push_back(a[q.front()]);

    for(int i=k;i<n;i++){
        if(q.front() == i-k){
            q.pop_front();
        }
        while(!q.empty() and a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    
    for( auto i: ans)
        cout<<i<<" ";

    return 0;
}