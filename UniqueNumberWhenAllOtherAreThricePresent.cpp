#include<iostream>
using namespace std;

bool getBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int unique(int arr[], int n){

    int result=0;               //This will store the unique number

    //This will check the bit of the array from 0 to 64times and atroe the number of setbit at ith position in sum
    
    for(int i=0;i<64;i++){          //Taken 64 or 16byte to check all the bigt numbers all the bits

        int sum=0;          //It is declared inside since for every iteratoe we would need a new sum=0

        for(int j=0;j<n;j++){           //This will check every element of array's ith position for set bit, then (i+1)th position ans so on

            if(getBit(arr[j],i)){       //This is to know the arr[j] element's ith position for 0 or 1. if 1 sum will be incresed ny one

                sum++;
            }
        }

            if(sum%3 !=0){       //This will check each ith sum if it's modulu is 3 or not. 3 because only all other number are appearing thrice

                result = setBit(result, i);         //This will setBit or 1 of that ith position since it is not divisible by 3 and this position is 1 in the final uniques number
            }
        
    }

    return result;
}

int main(){

    int arr[] = {1,2,3,4,1,2,3,1,2,3};

    cout<<unique(arr,10);


    return 0;
}