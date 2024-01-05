#include<iostream>
using namespace std;

int main(){

    char button;                //A varaible of data type character
    cout<<"Input a Character: ";
    cin>>button;

    switch(button)      //switch will compare with all the cases for varaibles button 
                        // And we wouldn't have to write if/else again and again to compare
    {
        
        case 'a':            //Each value of comparison will have it's own case
            cout<<"Hey";
            break;              //it breaks the switch, otherwise all the statements after the true case will be printed

        case 'b':
            cout<<"Hola";
            break;
        case 'c':
            cout<<"Namaste";
            break;
        case 'd':
            cout<<"Ciao";
            break;

        default:
            cout<<"I am still learning more";
            break;
    }
    return 0;
}