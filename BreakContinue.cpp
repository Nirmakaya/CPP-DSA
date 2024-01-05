#include<iostream>
using namespace std;

// continue = skip the loop to the next iteration
// break = it breaks the loop

int main(){

    int pocketmoney=3000;

    for(int day=0; day<30; day++){

        if(day%2==0){            //the if function is introduced to control the flow of loop using continue & break.
            continue;
        }

        if(pocketmoney==0){
            break;
        }

        cout<<"You can go out this day"<<endl;
        pocketmoney=pocketmoney-300;

    }

    return 0;
}