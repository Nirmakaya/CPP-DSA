#include<iostream>
using namespace std;

//Here we will see the actual use of pointers


//Call by value : only vlaues will be sent to the function created

void increment(int c){          //Here call is by value since we have send the value of a 
    c++;                        //This is local variable and will be destroyed after this function, so c will increase but original c will not increase
    
    //c is local varaible to this fuction, but if we would send a pointer then we can modify it from anywhere
}

//Call by reference : by sending the address of the varaible to the function


//Instead of variables the input here is pointers, and we can modify poitnter's variable from anywhere
void swap(int *a, int *b){                  //Here a and b are int pointers and not int value, so pointer a and b will have the address of original a and b 
    int temp=*a;
    *a=*b;                          //Now a will have value of b
    *b=temp;
}

int main(){

    int c=10;
    increment(c);               //Only the value of c is passed, This will not increse c=10 to c=11, since only value is passed to the function

    cout<<c<<endl;



    int a=2;
    int b=4;

    // swap(a,b) will not work and output will be 2 4 and not 4 2

    int *aptr=&a;
    int *bptr=&b;


    swap(aptr,bptr);               //While sending pointer we don't write swap(*aptr,*bptr) we write swap(aptr,bptr). But both does the same work and both are correct.
    //Even if we would have sent swap(&a,&b) the also the func will accept these two memory adress as pointers

    // Or we can directly send swap(&a,&b)

    cout<<a<<" "<<b<<endl;              //This will output the swaped numbers

    return 0;
}