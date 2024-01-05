#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<int> stockspan(vector<int> prices){                  //Here the return type will an vector because we are returning ta whole vector or array
    
    vector<int> ans;
    stack<pair<int,int>> s;

    for(auto price: prices){

        int days=1;             //The initial span would be one

        while(!s.empty()  &&  s.top().first <= price){

            days += s.top().second;             //Way to acess second element of vector s which stores pairs
            s.pop();
        }
        s.push({price,days});              //Or we can use make pairs
        ans.push_back(days);
    }

    return ans;             //Here ans is a vector

}

int main(){

    vector<int> a={110,80,60,70,60,75,85};
    vector<int> res= stockspan(a);

    for( auto i: res)
        cout<<i<<" ";
    cout<<"\n";

    return 0;
}