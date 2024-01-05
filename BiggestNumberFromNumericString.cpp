#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "685031853";             //Numeric string

    sort(s.begin(), s.end(), greater<int>() );              //For biggest number we can use sorting. Sorting must be in decending order

    // greter<int>() is used to sort in decending order

    cout<<s<<endl;
    return 0;
}