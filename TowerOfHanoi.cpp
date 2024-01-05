#include<iostream>
using namespace std;

void towerofHanoi(int n, char src, char dest, char helper){

    if(n==0){
        return;
    }

    towerofHanoi(n-1,src,helper,dest);                  //it will reccur for n times and get to the last block first

    cout<<"Move From "<<src<<" to "<<dest<<endl;        //This will move one block from source to destination

    towerofHanoi(n-1,helper,dest,src);
}

int main(){

    towerofHanoi(3,'A','C','B');
    return 0;
}