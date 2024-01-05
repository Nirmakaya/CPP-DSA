#include<iostream>
#include<vector>                    //Header file to work on vectors and it's functions
#include<algorithm>
using namespace std;

//Vector are basically Dynamic array. In array the memory allocation is static and cannot be changed later.
//In Vector can be changed according to need 

int main(){

    vector<int> v;              //Declaration of vector of type int and name "v"

    //Inser a element into Vector

    v.push_back(1);             //This will add 1 to the last element of vector, but since this is start so it will add 1
    v.push_back(2);
    v.push_back(3);

//To print output

    for(int i=0;i<v.size();i++){                //Here v.size() will give the size of vector
        cout<<v[i]<<endl;
    }

//Another method is to create a iterator to iterate over all the elements of vector

vector<int>::iterator it;                   //Syntax to create a iterator, iterator for an int vector. it here is a pointer

for(it=v.begin();it!=v.end();it++){                 //Here v.begin() and v.end() are first and last element's pointer of vector
    cout<<*it<<endl;                                //Since "it" is a pointer
}

//Using Auto Keyword to traverse the Vector

//auto means it'll decide by itself the output datatype depending on datatype during declaration

//Element is all the elements of vector

for(auto element:v){                            //Here auto will become a int
    cout<<element<<" "<<endl;
}                   


v.pop_back();           //Last element will be removed or popped

vector<int> v2 (3, 50);              //vector of name v2 size 3 and 3 elements 50 50 50

swap(v,v2);                     //v has now 50 50 50 and v2 becomes 1 2 

for(auto element:v){
    cout<<element<<" ";
}cout<<endl;

for(auto element:v2){
    cout<<element<<" ";
}cout<<endl;


//Sort() just like in array

sort(v.begin(), v.end());           //v.begin() is the begining iterator v.end() is the ending operator

    return 0;
}