#include<iostream>
#include<algorithm>
#include "bits/stdc++.h"
using namespace std;
  
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    int n = sizeof(arr) / sizeof(arr[0]);               //To calculate array;s size

    /* sizeof(arr)=10x4 or 40. Since sizeof() returns size in bytes
     so we need to divide it with sizeof(a[0]) or sizeof(int)  */

    cout<<n<<endl;

    //Another Way to calculate size, pointer hack
    int size = *(&arr + 1) - arr;                   //Here we have used the concept of &arr. &arr is pointer to the whole 10 index of array.

    cout<<size<<endl;

  
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/

    sort(arr, arr + n);
  
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout<<endl;

    sort(arr, arr + n, greater<int>());         //Sorting in Decending Order
  
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout<<endl;

    // sort(arr.begin(), arr.end());            // arr.begin() is not there in case of array, like in string, vectors, stack, queue,deque, multiset

    // for (int i = 0; i < n; ++i)
    //     cout << arr[i] << " ";
    // cout<<endl;

    cout << "There is no "                                          //New fashion to write cout
             << "Autobiographical number"
             << " with " << n
             << " digits\n";



  
    return 0;
}