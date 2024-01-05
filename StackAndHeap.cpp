#include<iostream>
using namespace std;

/* Stacks : Whenever a main function is called "Stack frame" is added to the "Memory Stack". Stack has a fixed memory
 * All the local variables will be destroyed after the output of the program
 * The compiler has to now allocate the memory space. The variables present in memory stack cannot be changed during run time, Hence we use Heap.
 * At Compile Time the system needs to know the memory it is going to assign in the Stack

 * Stack overflow : Memory stack is fixed, repeated call of functions or during recursion would result in a "Stack Overflow"
 
 * Variables can be in memory stack or in heap
 * Dynamic Memory Allocation : We manually allocate and deallocate the memory and this happens in "Heap" intead of Stack.

 * Heap : free store, can expand upto the Virtual memory. Varaiable here act as a global variable.
 * In heap we can change the size during runtime of program but with stack we cannot do such things since the memory allocation is fixed in stack. 
 * Memory allocation is not fixed in Heap.
 
 * Memory leak : It is a serious issue. This will never terminate the program. Hence Deallocating is must, whever you add something in heap.

 * Dangling Pointer : After delete the memory will be removed but the pointer would still point at the memory adress. No value is stored here.
 * Dangling pointer is unwanted. We can reuse the dangling pointer or we will have to remove it from stack too.

 */



int main(){

    int n=2;                //This is stores in Stack

    // new operator : is used to allocate memory in heap

    //Integer
    int *p = new int();         //allocate memory in heap, a memory for an integer will be created in stack
    *p = 10;                    // p will not be stored directly in heap. P's address will be at stack and it will be pointing to a variable at heap

    // Varaible at heap will act as a global varaiable, so 10 is global but need it's address to access it from anywhere

    delete(p);            //We need to manually deallocate the memory from heap, for this delete operator is used

    // Now in Stack there will a Dangling Pointer

    //Arrays
    p = new int[4];             //This is to allocate memory for a array of size 4 and p will point or store the memory adress of the 0th index of array bydefault.
    
    //Here we didn't have to declare p again.
    

    delete []p;         //Deallocate the memory

    p = NULL;           //This will delete the pointer, and this will remove the memory address that it was pointing to

    //And once the main function is execute p will be destroyed from the stack too



    return 0;
}