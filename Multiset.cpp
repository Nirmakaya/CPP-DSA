#include<iostream>
#include<set>                           //Same header file for multiset too
#include<unordered_set>                 //Header file for unordered set
using namespace std;

/* 
 Multiset : Another STL, In this duplicates are allowed
 implemented using binary search terminate
 insertion and deletion time complexity is O(logn) 

*/

/* 
 Unordered Set : elements can be unsorted. 
 Implemented using hashing
 Main advantage is insertion and deletion time complexity is O(1) is avg case and O(n) in worst case. 
 this will not have any lower or upper bound due to unsorted elements
 No duplicates are allowed
*/

int main(){

    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);                    //Two will not print again set only has a Unique elements.
    s.insert(3);
    s.insert(5);

    for( auto i : s)
        cout<<i<<" ";
    cout<<"\n";
    
    //We can pass both pointer or value to the erase() function
    s.erase(s.find(3));                 //find() will give the first occurance pointer and only that will get deleted

    for( auto i : s)
        cout<<i<<" ";
    cout<<"\n";

    s.erase(3);                 //This will remove all "instances" of 3

    
    for( auto i : s)
        cout<<i<<" ";
    cout<<"\n";

    //Unordered Set
    unordered_set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);                    //Two will not print again set only has a Unique elements.
    s1.insert(3);
    s1.insert(5);

    for( auto i : s1)                   //The ouput will be in random order
        cout<<i<<" ";
    cout<<"\n";

    return 0;
}