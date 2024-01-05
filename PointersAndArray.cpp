#include<iostream>
using namespace std;

/* We can use array as a pointer. Pointer of array behaves in a same way as pointer. 
 * In arr[] a pointer arr is already pointing to the 0th index of the element, so *arr will give arr[0]
 * The pointer arr is fixed and we cannot apply Pointers Arithmatic to it.
 * Illegal = increasinf pointer arr++ is will give error
 * arr is index pointer, so arr+1 will point to next index i.e 1.
 *  *arr will store the memory location of 0th element and cout will output the 0th element
 */

int main(){

    int arr[]={10,20,30};
    cout<<*arr<<endl;           //Dereferencing array, this will print the 0th index element. This stores the 0th element address
    

    int *ptr=arr;

    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;                          //This is legal and will give the next index Value
    }

    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;           //This will increase the constant array's index by 1.
        // arr is a index pointer, so we don;t need to do arr+4i for int we will add 1 and it will point to next variable
        //arr++ is illegal since arr pointer value is constant hence we have used i
    }

    
    //Pointers To Pointer
    int a=10;
    int *p;
    p=&a;
    cout<<*p<<endl;

    int **q=&p;                 
    cout<<*q<<endl;             //This is dereferencing once, will give the adress of p, p is already pointing to a
    cout<<**q<<endl;            //Dereferencing twice, this will give the value of a
    
 

    return 0;
}