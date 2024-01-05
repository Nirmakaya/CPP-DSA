#include<iostream>
using namespace std;

// char arr[n+1];  In Character array there exist a null value at end which marks the end of the array. \0 is null value

int main(){

    char arr[100] = "apple";            //Initialisation of a character array, arr[100]={'a','p','p','l','e','\0' and more spaces since size is 100}

    int i=0;

    while( arr[i] != '\0'){             //At last there will be a null value
        cout<<arr[i]<<endl;
        i++;
    }

    //To take a input from user

    char input[100];
    cin>>input;
    
    cout<<input[3];         //This will give output of the 4th array


    return 0;
}