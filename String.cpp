#include<iostream>
#include<string>                //This contains many functions of strings
using namespace std;

int main(){

//Various ways to declare a string

    string str;
    cin>>str;
    cout<<str;                      //This will output only the first word if it's a sentence sentence

    string str1 = "ApniKaksha";         //Declare string in double qoutes

    string s7("Hoyaho");            //New way to initialise learned from Google
    cout<<s7<<endl;

    string str2(5, 'n');                //This will print the character n 5 times

    cout<<str1<<str2;

    string str3;

    getline(cin, str3);             //By getline function the whole sentence will be taken as a single input
    cout<<str3<<endl;

    //Functions in string

    string s1= "fam";
    string s2= "ily";

    s1.append(s2);              //Apend means to joint two strings for that we have used a append function. This will change s1


    cout<<s1+s2<<endl;          //This can be used in place of append function

    cout<<s1<<endl;

    //Acess a element of string

    cout<< s1[1] <<endl;            //Here s1 is treated as an array

    // Clear function

    string abc = "ssdfkghhjhhufvgho ko";
    abc.clear();            //This will remove the string from abc
    cout<<abc<<endl;

    

    return 0;
}