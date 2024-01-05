#include<iostream>
#include<algorithm>                 //Contains many sorting functions
#include<string>
using namespace std;

int main(){

    string s1="abc";
    string s2="xyz";
    string s3="abc";

//Comparison of strings, using compare function

    cout<<s1.compare(s2)<<endl;             //This will be positive since xyz is greter in ASCII than abc

    if(!s1.compare(s3))             //In "Argument" s3 is passed, since s1 is equal to s3 it will be zero, anf if statement will be false hence !0 is used
        cout<<"String are equal"<<endl;

//Empty function

    s1.clear();
    cout<<s1.empty()<<endl;
    cout<<s2.empty()<<endl;             //Empty function will give 0 or 1 to tell whether the string is empty or not

    if(s1.empty())
        cout<<"String is empty\t"<<"Tab Space"<<endl;

//Erase function

    string s4="nincompoop";

    s4.erase(3 , 3);            // Erase(Index from where you need to erase, Number of characters to erase after that index)
    cout<<s4<<endl;

//Find function : to check for a particular "sub-string"

    cout<< s4.find("poo") << endl;              //This will return the index from where com starts

//Inser function

    s4.insert(3, "com");            // Here 3 is index where you want to inser and after that is the substring
    cout<<s4<<endl;

//Length or size function

    cout<<s4.size()<<s4.length()<<endl;     // size() and length() both are same

    for(int i=0; i<s4.length();i++){            //length() can be used to acess all the characters of the string
        cout<<s4[i]<<endl;
    }

//Substr function : to print a substring

    cout<< s4.substr( 6, 4) <<endl;

//Stoi function : to convert a numeric string into a integers

string s5= "786";
int x = stoi(s5);
cout<< x+2 <<endl;

//Tostring function : from integer to string

int y=786;
cout<< to_string(y) + "2"<<endl;                //This will append to y and not add to y

//Sorting of a string

string s6 = "fjdomencit";

sort(s6.begin() , s6.end());                 // s1.begin is the starting iterator, s1.end() is the iterator after the last string is ended

//Both are passed in sort function

cout<<s6<<endl;

    return 0;

}