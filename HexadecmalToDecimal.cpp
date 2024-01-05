#include<bits/stdc++.h>             // This includes all header files string,vector etc
using namespace std;


int HexadecimaltoDecimal(string n){      //Standard code for hexadecimal to decimal convertion
    int ans=0;
    int x=1;

    int s = n.size();            // .size() is a predefined funtion for string

    for(int i=s-1; i>=0; i--){         // Here i starts from s-1 because nth postion will have n-1 index in array

        if( n[i] >= '0'  && n[i] <= '9'){

            ans += x*(n[i]-'0');            //We first converted the numeric string into integers
        
        } else if( n[i] >= 'A' && n[i] <= 'F'){

            ans += x*(n[i]-'A' + 10);               // +10 Since the A-A will be 0 and we need 10, Similarly B-A will be 1 and 10+1=11
        }
            x*= 16;
    }

    return ans;
}

int main(){
    
    string n;                       // Since input can be string in hexadecimal
    cin>>n;

    cout<< HexadecimaltoDecimal(n) <<endl;

    return 0;
}