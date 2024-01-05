#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair <int,int> p1, pair <int,int> p2){

    return p1.first<p2.first;
}

// std::pair = is an "STL" "container" which allows us to store pair of values

int main(){

    pair <int,char> s;                  //Declaration of pair with the two values datatype

    s.first = 3;            //p.first and not p.first() because first is not a function
    s.second = 'f';         

    //We have used a different "Data Structure" to store the arrays with index named Vector


    // Question to reduce array to thier index number only

    int arr[]={10,16,7,14,5,3,12,9};

    vector < pair<int,int> > v;                 //We can create a vector of datatype pair

    // Size of array = size(arr)/size(arr[0])

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){             //Standarad Code To store array in the Vector

    // pair <int,int> p;
    // p.first = arr[i];
    // p.second = i;
    // We can skip the adding pair into vector by directly using make_pair() function

    v.push_back(make_pair(arr[i],i));

    }

    sort(v.begin(), v.end(), myCompare);            // Here myCompare is a "comparator" that we need to build because we need to sort by our own desire

    for(int i=0;i<v.size();i++){
        arr[v[i].second] = i;
    }

    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}