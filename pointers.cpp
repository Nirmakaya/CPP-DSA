#include<iostream>
using namespace std;

//Pionters: stores the address of another variable. In hexadecimal. By pointers we can acess and modify the real variable.

int main(){

    int a=10;
    int* aptr;              //Pointer that points on 'a' so the datatype of pointer is int because 'a' is int.

    //&a = gives the adress of a

    aptr = &a;                      //To Store the adress of "a" use "Ampercent"

    cout<<&a<<endl;                 //This will output the adress of a
    cout<<aptr<<endl;               //This will return the value of aptr
    cout<<*aptr<<endl;              //Dereferencing, this will give the value of a

    *aptr = 20;                     //This will modify the value of a without actually changing it
    cout<<a<<endl;
    
    //Pointers Arithmatics : ++, --, +, - These four are possible.

    int b=10;
    int *bptr=&b;
    cout<<bptr<<endl;           //Suppose the memory location is 2000
    bptr++;
    cout<<bptr<<endl;           //This will output 2004 since the size of a int is 4bytes and the next bit will be at 4 place ahead. That's why we need to declare the data type of pointer at declaration.
    cout<<*bptr<<endl;          //This would be same =10, since there is no next element at next memory location

    char ch='a';
    char *cptr = &ch;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;           //Here the address will increase by only one byte due to char

    return 0;
}