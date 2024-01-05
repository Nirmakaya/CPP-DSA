#include<iostream>
using namespace std;

/* Inheritance is to inherit the attributes or datamembers and "Method" or "Member Function" from one class to another
 * Another class can only inherit the public and protected data from another class and NOT the private part.
 * Private cannot be inherited in child class, but can be accessed within the same parent class.
 * Members : All the Attributes. Data Members and the Member Function of that Class
 */

class A{


    int Yuri;                       //This is private. This is a Data Members.

    public :
    void func(){                    //This is a Member Function.
        cout<<"Inheritance";
    }

    protected :
    void SecondFunc(){
        cout<<"Hola";
    }
};

class B : public A{                             //Code to inherit class A for Class B. All the data of class A will be on Public for class B

public:

};

class C : private B{                        //All the attributes of claas B is on private for Class C. Hence it cannot be Inherited futher

    //We cannot inherit Datmember of Class C further, Since it is in Private
    int roof;
    public :
    void in();
    void Out();            //Members which are "Directly Accessible" from this Member Function are Out() are func(), Secondfunc(), int roof, in().        



};

int main(){

    C c;                //This is a object of Class C
    c.in();
    c.Out();



    return 0;
}