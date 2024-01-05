#include<iostream>
using namespace std;

int countPath(int s, int e){

    if(s==e){
        return 1;                   //Since we can go from End to End by 1 ways
    }
    if(s>e){
        return 0;                   //Since start greater than end isn't possible hence we give output -1
    }

    int count = 0;

    for(int i=1;i<=6;i++){                  //Since the dice will go for 6 times, so maximum s+6

    count += countPath(s+i, e);

    }

    return count;
}

int main(){

    cout<<countPath(0,3);

    return 0;
}