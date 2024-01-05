#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "dimrnabfoel";

    //In ASCII 'a' - 'A' = 32 Hence we will use this to convert into lower or upper case.
    // small case 'a' is ahead in ASCII than capital 'A'

    // "231" by subtracting '0' from s[each index], we can convert it to intergers

    // 'A'-'A' =0  and 'Z' - 'A' is 25, Used in hexa decimal conversion here 'A' act as zero


    //Upper case

    for(int i=0;i<s.size();i++){
        if( s[i]>='a'  &&  s[i]<='z'){              //For a to z
            s[i] -= 32;
        }
    }
    cout<<s<<endl;

    //Lower Case

    for(int i=0;i<s.size();i++){
        if(s[i]>='A'  && s[i]<='Z'){
            s[i] += 32;
        }
    }
    cout<<s<<endl;

//Inbuild Function

    transform( s.begin() , s.end(), s.begin(), ::toupper);      //First we have passed the string starting and ending index but begin() & end() and then from begin() to upper case

    cout<<s<<endl;

    transform( s.begin(), s.end(), s.begin(), ::tolower);

    cout<<s<<endl;

    return 0;
}