#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int rainWater(vector<int> v){

    stack<int> st;
    int ans=0;
    int n= v.size();

    for(int i=0;i<n;i++){
        while(!st.empty()  && v[st.top()]<v[i]){
            int curr = st.top();
            st.pop();

            if(st.empty()){             //Case where there is no lest bar to support water
                break;
            }
            int diff = i-st.top()-1;
            ans += (min(v[st.top()],v[i]) - v[curr]) * diff;
        }
        st.push(i);
    }

    return ans;
}


int main(){

    vector<int> v = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout<<rainWater(v)<<endl;

    return 0;
}