#include<iostream>
using namespace std;

//Important from interview Questions
 
//Get bit : to get the digit at given position
int getBit(int n, int pos){

    return ((n & 1<<pos)!= 0);          // left shift the 1 by the given position and AND it with original number

}
//Brackets are important due to "precendence" of operator

//SetBit : set bit to 1 to the given position, unset means to set 0
int setBit(int n, int pos){
    return ((n | 1<<pos));
}

//Clear Bit = to clear the given position or put zero there
int clearBit(int n, int pos){

    int mask =  ~(1<<pos);                //Terminology Mask : used to mask the digit that need to be changed. 1' compliment of 1<<pos
    return (n & mask);
    }

//Update Bit : to update the bit of the given position. First we will clearBit the position and then setBit it.

int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;

    return ( n | (value<<pos));
}

int main(){

    // cout<<getBit(7,1);
    // cout<<setBit(5,1);
    // cout<<clearBit(5,2);
    cout<<updateBit(5,1,1);
    return 0;
}