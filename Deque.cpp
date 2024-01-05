#include<iostream>
#include<deque>
using namespace std;

//Deque : It is combine of Stack and Queue. In this we can push or pop element from both end

int main(){

    deque<int> dq;

    dq.push_back(1);                //Syntax to push an element in back
    dq.push_back(2);
    dq.push_front(3);               //Syntax to push an element in front
    dq.push_front(4);

    for(auto i: dq){                    //Use of auto keyword with a iterator variable i
        cout<<i<<" ";
    }cout<<endl;

    dq.pop_back();                  //Pop from both end
    dq.pop_front();

    for(auto k: dq)
        cout<<k<<" ";
    cout<<"\n";

    cout<<dq.size()<<endl;
    




    return 0;
}