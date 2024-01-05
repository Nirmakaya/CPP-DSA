// #include<iostream>
// #include<deque>
// #include<vector> OR
#include "bits/stdc++.h"
using namespace std;

/* MultiSet : it is a container like Stack. it has a definite order.
 * If greater<int> is used then the elements will be stored in Decending order.
 * First element being the largest one.
 * Syntax : multiset<datatype>, greater<int> > name.
 * s.insert(), s.erase(), s.lower_bound()
 */

//Timr Complexity : O(nlogn)

int main(){

    int n,k; cin>>n>>k;         //Short way to declar and take two variables, here two ; is used in a single line

    vector<int> a(n);                  //Here n was the size of the array a

    for( auto &i: a){               //For loop to take input dynamically, we have used &i
        cin>>i;
    }

    multiset<int, greater<int>> s;              //We have used greter operator so that at top the max element is present

    vector<int> ans;

    for(int i=0;i<k;i++){
        s.insert(a[i]);                 //This will store till k in multiset and first will be maximum int
    }

    //s.begin() is the iterator of first element and *s.begin() will be the element

    ans.push_back(*s.begin());

    for(int i=k;i<n;i++){
        s.erase(s.lower_bound(a[i-k]));                 //if we write only s.erase(a[i-k]) then it will remove all elements of value a[i-k], hence we have used lower bound
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }

    for(auto i:ans)
        cout<<i<<" ";
    


    return 0;
}