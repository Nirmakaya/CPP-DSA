#include<iostream>
using namespace std;

/* Function Overiding : During inheritance if birth class have a same name member function then sometimes then compiler gets confused which func to run.
 * So the function which is marked as virtual will not get called
 * Use of Virtual function to achieve run time polymorphism. it is bind dynamically.
 * So parent is made virtual and child class overides
 */  

class base{
    public:

    //Here print() becomes a virtual function
    virtual void print(){                                   //Here Virtual will make print() to not be used during runtime and instead run the derived class print
        cout<<"Base's Class print function\n";
    }

    void display(){
        cout<<"Base's Class display function\n";
    }
};

class derived: public base{

    public:

    void print(){
        cout<<"Derived's Class print function\n";
    }

    void display(){
        cout<<"Derived's Class display function\n";
    }

};

int main(){

    base *baseptr;
    derived d;
    baseptr = &d;                           //Here we have put the pointer baseptr to point to dervided class object d
    
    //Here below both are pointer, so both must print the values of it's pointind derived class, but to chieve this at runtime we need virtual before the base class function
    baseptr -> print();                     //-> operator is used in case of dot operator Since it is a pointer
    baseptr -> display();


    return 0;
}