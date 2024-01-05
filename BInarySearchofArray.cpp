#include<iostream>
using namespace std;

// To apply binarysearch the array must be in sorted order
// Binary search has less time complexity than the linear search that's why it is used. We use mid terms and reject the half of the elements of the array

// linearsearch has time complexity of O(n) and binarysearch has O(logn)

int BinarySearch(int array[], int n, int key){

    int s=0;            // s is the start of array binary search
    int e=n;            // e is the end of array binary search, here n is used and not n-1, for start addition s+e=n

    while(s<=e){            // s is less than e since if the s will be grester than e then it means the character/element isn't present and -1 will get returned
        
        int mid= (s+e)/2;           // This is the mid index element
        
        if( array[mid] == key){         
            return mid;                     
        }

        else if( array[mid] > key){         //This will move end to mid-1, and only first half will be checked now       
            e = mid-1;

        }

        else{
            s = mid+1;                      //This will move start to mid+1, and only second half will be checked now
        }

    }

    return -1;
}

int main(){

    int n;
    cin>>n;
    int array[n];

    for(int i=0; i<n; i++){

        cin>>array[i];
    }

    int key;
    cin>>key;
    cout<<BinarySearch(array,n,key);

    return 0;
}