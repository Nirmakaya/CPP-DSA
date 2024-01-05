#include<iostream>
#include<vector>
using namespace std;

/* Subsequence : it is not contiguous, just order is maintained
 * Substring : it is contiguous, same for subarray
 * Frequency array or Position marking array : it stores a element or a integer or character;s position of occurence in question array or string OR if or how many times it has occured OR to mark it as checked
 */ 

int main(){

    string s; cin>>s;

    //Created a vector to store position
    vector<int> dict(256, -1);                  //256 beause the ASCII code of is not more than 256, so all charactes will be included. All initialised by -1

    int maxLength=0;
    int start=-1;           // start stores the value of the first index of a non repeating character, such i-start = legth of substring

    for(int i=0;i<s.length();i++){

        if(dict[s[i]]>start){               //Case when that chaqracter is repeated in the string
            start= dict[s[i]];              //To keep start at old position of that repeating chracter
        }
        dict[s[i]] = i;                         //Position of character in string updated in ASCII array each time 
        maxLength = max(maxLength, i-start);
    }

    cout<<maxLength;

    return 0;
}

