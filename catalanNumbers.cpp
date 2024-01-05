#include<iostream>
using namespace std;

/* Catalan Number : a series of natural numbers used in various problems.
 * Recursively defined Object : like BST, binary trees, forests, triangulation problems in which polygons are used.
 * The method we learned here has a terrible time complexity, later we will optimised it using dyanmeic programming
 */

int catalan(int n){

    if( n <= 1){                //Since C0 and C1 is equal to 1
        return 1;
    }

    int res = 0;
    for(int i=0; i<=n-1; i++){
        res += catalan(i) * catalan(n-i-1);               //Formula to calculate catalan of a number
    }

    return res;
}


int main(){

    for(int i=0; i<10; i++){
        cout<<catalan(i)<<" ";
    }

    return 0;
}
   
