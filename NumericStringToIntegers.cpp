#include<iostream>
#include<string>
#include<math.h>
using namespace std;

//Use stio() or the below code

int main(){

    string s = "9038";
    int newNumber=0;

    for(int i=s.length()-1;i>=0;i--){                   //Watch the traversing
    int power = s.length() - i -1;
    newNumber += (pow( 10.0, power)*(s[i]-'0'));
    }

    cout<<newNumber<<endl;

    
    return 0;
}