#include<iostream>
#include "bits/stdc++.h"                //Here we also write without using <>
using namespace std;

vector<vector<int>> ans;            //Vector of ans, Declared Globally

void permute(vector<int> &a, int idx){

    if(idx == a.size() ){                   //Base Case
        ans.push_back(a);
        return; 
    }
    for(int i=idx;i<a.size();i++ ){                 //Recursive call
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}
int main(){

    int n;
    cin>>n;

    vector<int> a(n);               //A vector like array, of type int name a(), value n given by user

    for( auto &i : a)           //To take n integers as input 
        cin>>i;

    permute(a,0);               //Permute in a, which starts with 0 

    for( auto v : ans){         //To print the ans vectors elements
        for(auto i : v)
            cout<<i<<" ";           //Only first line after an unmarked brackets loop will be in loop next line would not be included
        cout<<"\n";
    }

    return 0;
}