#include<iostream>
using namespace std;

// Constructor = Whenever we create a Object then bydefault the "Constructor" is called

/* Destructor = We cannot pass any parameter nor we can return antything. it is called at the last return 0 statement.
 * Because at return 0 all the variable and object will get destroyed.
 * Default Constructor : Whenever we create an object which has no parameter then default constructor will be called
 */

//Operator Overloading : In this we make a operator behave in a certain way which is not it's normal way of Function

class student{                        

    string name;                    //Private DataMember    

    public:                           

    int age;
    bool gender;

    //While writing constructor we don't need to write any datatype like void,int,string,long,double,float etc.
    student (string s, int a, int g){
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }//Parameterised Constructor

    student (student &a){               //Here in parameter a student will come with it's address
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }//Copy constructor
    //There exis a default copy constructor but it has Shallow copy problem and if we create it, it takes Deep Copy= values with the pointers and memory location

    ~student(){                     // This will get called 3 times since 3 objects are created

        cout<<"Destructor Called"<<endl;

    }//Destructor
    
    

    student(){                           
        cout<<"Default Constructor"<<endl;

    }//Default Constructor 


    //Operator Overloading of == operand. To check two Constructor
    bool operator == (student &a){
        if(name==a.name  && age==a.age  && gender==a.gender){
            return true;
        }
        return false;
    }
    //Here the name, age, gender is of that second operand which needs to be compared, and a is passed
    
    void setName(string s){            
        name =s;
    }

    void getName(){
        cout<<name<<endl;
    }


    void printInfo(){                   

    cout<<"Name : ";
    cout<<name<<endl;
    cout<<"Age : ";
    cout<<age<<endl;
    cout<<"Gender : ";
    cout<<gender<<endl;
    
    }

  };                     

int main(){

    student a("Urvi", 20, 1);                   //Instead of using Dot Operators again and again, we have directly used Parameterised Constructor
    // a.printInfo();

    // student c(a) = one way of declaring Copy Constructor
    student c = a;                      //This will call Copy Constructor, because argument contain the same datatype student
    //Now c will have the values of a


    //Default Constructor
    student b;       

    if(c==a){                           //Here equal to operator has been overloaded. Otherwise it would have given an error
        cout<<"Same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }      



    return 0;
}