#include<iostream>
using namespace std;

// to print only prime number between two given numbers or in a given range

int main(){

    int a,b;
    cin>>a>>b;

    for(int num=a; num<=b; num++){              //for loop to iterate from a to b
        int i;
        for(i=2; i<num; i++){               //standard for loop to check prime number
                if(num%i==0){
                
                    break;                  //it breaks the nested for loop 
                }
            
        }
        if(i==num){                 //checks if i has completed the loop or come out by breaking it
            cout<<num<<endl;
        }
        
    }


    return 0;
}