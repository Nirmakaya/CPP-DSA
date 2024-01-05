#include<iostream>
using namespace std;

int main(){

    // 1) Arithmatic Operator
    // Binary operator : % = Modulo

    // Unary operator : Increamenter ++  ++a is pre incrementer a++ is post Incrementor

    int i=0;
        //0   //0   //1   //0
    i = i++ + --i + ++i - --i;      // in i++ the previous value will be used and will increased by 1 at end of statement
        //1

    cout<<i<<endl;


    // 2) Relation Operators :
    // if(a==b) will give true if a is equal to b
    // if(a!=b) gives true if a is not equal to b

    // 3) Logical Operators : &&, ||, !
    // Works on two boolean values of true or false
    // T && F gives true only if both are true
    // !(T) It is NOT operator, will reverse the logical value 
    // Any value other than 0 is true. hence, !5= 0 or false and !0= 1 or true

    int j= !5;                  //Here 5 is considered as true value
    cout<<j<<endl;

    // 4) Bitwise Operators : perform bit by bit, 
    //     0110                             0110
    //   ^ 1100                         |   1100
    //     0101  XOR operator               1110    OR operator

    // left shit << is 4<<1                                 right shift >> is 4>>1
                    // 0100        a<<n                            0100     a>>n
                    // 1000       formula a*2^n                    0010     formula a*2^n

    int k= 4<<1;
    cout<<k<<endl;

    // 5) Michelleneous Operators : Ternary operator or condition?X:Y  
    //        a=2 and b=3  int c= a>b?a-b:b-a  this is to print modular a-b it is short of if else statement
    
    int a=3;
    int b=6;
    int c=a>b?a-b:b-a;
    cout<<c<<endl;

    //Cast Operator changes one datatype to another
    char ch='a';        
    cout<<int(ch)<<endl;            //cast operatot will convert the ch into it's ascii value
    
    //comma(,) operator will take the last operation or value

    int e=(2,3,4);
    int f=(8-2,7-5);
    cout<<e<<f<<endl;  // e=4,f=2

    // 6) Assignment Operators : Assigns value to the left operant a+=b means a=a+b, it will assign value to a
    // =,+=,-=,*=,/=

    int d=3;
    d*=c;
    cout<<d;
    return 0; 
}