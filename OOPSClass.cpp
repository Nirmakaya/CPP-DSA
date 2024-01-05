#include<iostream>
using namespace std;

/* Class = Used to store different "attributes" of a same things. These attributes are called "Data members".
 * The value of a particular attribute or datamember is called "Instance" of that class.
 * Object = Instance of a class is known as "Object" of that class.
 * Class will have all the defined data type.
 * Class byDefault have the private scope. Private, public, protected are all Access Specifier
 */
  

  class student{                        //class DataType name which is student

    string name;                        //String name is still private, it can only be accessed within this class

    public:                             //All the data members after public can be accessed from anywhere

    int age;
    bool gender;

    // Below setName has a parameter which will be stored in private datamember name. So by this we can access the private data member 
    void setName(string s){                 //This function will make private datamember name accessible from anywhere using setName()
        name =s;
    }
    //Setter Function

    void getName(){
        cout<<name<<endl;
    }
    //This is to print the values

    void printInfo(){                       //This function is declared to print value and this Function will of only student class

    //Here we don't have to pass any argument or parameter, of the objects, it will be accessible

    cout<<"Name : ";
    cout<<name<<endl;
    cout<<"Age : ";
    cout<<age<<endl;
    cout<<"Gender : ";
    cout<<gender<<endl;
    
    }

  };                                    //Semicolon at end tells the compiler that it is a class

int main(){

    // student a;                           //Here a is an Object of class student, with datatype student and it's attributes
    // a.name = 'Urvi';
    // a.age = 20;
    // a.gender = 1;    

    // We can give value one by one OR we can create a Array instead


    //Here array is an Object
    student arr[3];                                 //This arr[0] will have 3 datatype string,age,bool and similarly arr[1] will have it.

    for(int i=0;i<3;i++){
        string s;                       //Created a string s to store the input
        cout<<"Name : ";
        cin>>s;                         //Here arr[i] is a object
        arr[i].setName(s);
        cout<<"Age : ";
        cin>>arr[i].age;                        //We use "Dot Operator" to access the data members 
        cout<<"Gender : ";
        cin>>arr[i].gender;

    }

    for(int i=0;i<3;i++){

        arr[i].printInfo();                 //This function will print all the Object as decribed in the class
    }




    return 0;
}