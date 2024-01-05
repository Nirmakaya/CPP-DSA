#include<iostream>
#include<set>                            //Header file
using namespace std;

/* 
   Set : is a unique element sequence. No duplicates are allowed

*/

int main(){

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);                    //Two will not print again set only has a Unique elements.
    s.insert(3);
    s.insert(5);

    for( auto i : s)
        cout<<i<<" ";
    cout<<"\n";

    for( auto i=s.begin(); i!=s.end(); i++)
        cout<<*i<<" ";
    cout<<"\n";

    for( auto i=s.rbegin(); i!=s.rend(); i++)               //This will iterate from reverse order so i++ in reverse is the second last element, this will print the set backwards
        cout<<*i<<" ";
    cout<<"\n";

    cout<<s.size()<<endl;

    //Lower Bound And Upper Bound
    cout<<*s.lower_bound(2)<<endl;
    cout<<*s.lower_bound(3)<<endl;
    cout<<*s.upper_bound(3)<<endl;
    cout<<( s.upper_bound(5) == s.end())<<endl;               //The upper Bound of 5 doesn;t exist so bydefault it will give the value of last pointing element

    //Erase
    s.erase(2);                     //Passing element
    s.erase(s.begin());               //Passing pointers

     for( auto i : s)
        cout<<i<<" ";
    cout<<"\n";


    // //Custom Comparator
    // set<int, <greater<int>> k;                   //This will print the output in Decending order only, no matter in which order you insert them

    // k.insert(1);
    // k.insert(2);
    // k.insert(3);  

    // for( auto i : k)
    //     cout<<i<<" ";
    // cout<<endl;

    return 0;
}