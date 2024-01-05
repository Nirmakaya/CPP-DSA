#include<iostream>
using namespace std;

// PolyMorphism : Poly means many and Morphism means forms. So many forms of same things.

//Function Overloading : Using same Function name of a class but differ by argumnets number or it's data type

class ApnaCollege{

    public:

    void fun(){
        cout<<"Function with no Argumnets"<<endl;
    }

    void fun(int n){
        cout<<"Function With int Argument"<<endl;
    }

    void fun(double n){
        cout<<"Function with double Argument"<<endl;
    }
};


//Operator Overloading

class Complex{

    private:
        int real,imag;

        public:

           Complex(int r, int i){                      //Constructor
            real=r;
            imag=i;
            }

            Complex(){                         //Created a Default Constructor
            }
            

        //Opreator overloading of '+' operator to add both complex Number. Here return is Complex class since it's will return a complex number addition
        Complex operator + (Complex const &obj){                 //This &obj is call by reference
            Complex res;
            res.real = real + obj.real;                  //Here real is the current real part and obj.real is the obj's real part
            res.imag = imag + obj.imag;
            return res;
        }

        void display(){
            cout<<real<<" +i"<<imag<<endl;
        }
};



int main(){

    //Function Overloading
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.65);


    //Operator Overloading
    Complex c1(12, 6), c2(6, 7);
    // Complex c3(c1 + c2); OR
    Complex c3 = c1 + c2;               //Here c3 will have value c1+c2. Due to overloading c3 will have real and imag value as sum of c1 and c2

    c3.display();


    return 0;
}