#include<iostream>
using namespace std;

//By Far the best code

int setBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

void unique(int arr[], int n){              //void since we wouldn't return anything cout is included in this function already

    int xorsum=0;
    for(int i=0;i<n;i++){      
        
        xorsum = xorsum^arr[i];        //When xor All the duplicates will get cancelled, only uniques willl remain

    }

    //Now to find the rightmost setbit of xorsum

    int tempxor=xorsum;                //This will store the value of original xorsum since it will be changed in the process but we will need this variable at last step

    int setbit=0;                   
    int pos=0;                      //A variable in which the number place of 1 will be stored

    while(setbit != 1){             //This will stop if setbit founds 1 in 001010 or any binary

    setbit = xorsum & 1;             // AND with 1 will give last digit, be it 1 or 0
    pos++;                          //This will store the position + 1 extra value due to loop. Hence pos-1 will be the rightmost setBit
    xorsum = xorsum>>1;             // This will update xorsum and 0001 will become 0010 to check the second left bit
    
    }

    //Now we have to check which element of array will have 1 at the same position, and xor all of them which now give one of the unique number since the other one would not be included

    int newxor=0;                       //Again we have to xor all the selected elements so a new update varaible is created
    for(int i=0;i<n;i++){           
        if(setBit(arr[i], pos-1)){           //A standard funtion created at start to check setBit, if it gives 1 then if statement will be true
            newxor = newxor^arr[i];             //This will give 1 of the unique number
        }
    }

    cout<<newxor<<endl;
    cout<<(newxor^tempxor)<<endl;

}

int main(){

    int arr[]={1,2,3,1,2,3,5,7};
    
    unique(arr, 8);             //Just need to call the function


    return 0;
}