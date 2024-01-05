#include<iostream>
using namespace std;

int main(){
     
     int row, col;
     cin>>row>>col;

     for(int i=1;i<=row; i++){
        for(int j=1;j<=col; j++){

            if(i==1 || i==row){         // || is OR and here we haven't used semicolon at the of condition statements
                cout<<"* ";
            }  else if(j==1 || j==col){     //You can club the elseif in the first if statement to avoid long code
                cout<<"* ";
            } else{                     // if can be written without else.
                cout<<"  ";
            }        
        }
        cout<<endl;
     }

    return 0;
}