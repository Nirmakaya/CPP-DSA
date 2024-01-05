#include<bits/stdc++.h>
using namespace std;

bool check(int x, int y, int z)         // Seperate this with comma and not semicolon
{
    int a= max(x,max(y,z));             // New max(x,y) function to calculate maximum of x and y

    int b,c;

    if(a==x){                   //b and c doesn't matter but the highest umber must be stored in a for a*a = b*b + c*c
        b=y;
        c=z;
    }else if(a==y){
        b=x;
        c=z;
    }else{
        b=x;
        c=y;
    }

    if( a*a== b*b + c*c){
        return true;
    }else{
        return false;
    }
}

int main(){

    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythagorean Triplets";
    }else{
        cout<<"Not a Pythagorean Triplets";
    }

    return 0;
}