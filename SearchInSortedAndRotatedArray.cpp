#include<iostream>
using namespace std;

int searchInRotatedArray(int arr[], int key, int left, int right){

//Here Left and right are extremities or range of the binary search

    if(left > right){
        return -1;
    }

    int mid = (left+right)/2;

    if(arr[mid] == key){
        return mid;
    }

    //Case when pivot is on right of mid, in this we will search left first
    if( arr[left]<= arr[mid]){
        if(key>=arr[left] && key<=arr[mid]){
            return searchInRotatedArray(arr, key, left, mid-1);
        }
        return searchInRotatedArray(arr, key, mid+1, right);
    }

    //Mid is after the pivot 
    if(key>=arr[mid] && key<=arr[right]){
        return searchInRotatedArray(arr, key, mid+1, right);
    }
    return searchInRotatedArray(arr, key, left, mid-1);
}





int main(){

    int arr[] = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5};

    //Here 10 is the point of pivot

    int n = 8;
    int key = 8;

    int idx = searchInRotatedArray(arr, key, 0, n-1);

    if( idx == -1){
        cout<<"Key Invalid"<<endl;

    }else{
        cout<<idx<<endl;
    }



    return 0;
}

