#include<iostream>
using namespace std;

/*  Inversion if arr[i]>arr[j] and i<j, So we will use merge sort to count the number of inversion.
 *  Since by brute force approach time complexity becomes O(n^2)
 *  Since inversion can be many we will use Long long of memory  8-bits
 */


long long merge(int arr[], int l, int mid, int r){

    long long inv=0;

    int n1 = mid-l+1;
    int n2 = r - mid;               //Since r-(mid+1)+1 = r - mid
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i]= arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]= arr[mid+i+1];
    }

    int i=0, j=0, k=l;

    while(i<n1  && j<n2){
        if(a[i]<=b[j]){                      //Here there will be no inversions since a[i]<b[j]
            arr[k]=a[i];
            k++; i++;

        }
        else{
            arr[k]=b[j];                //Here a[i]>b[j] and 
            inv += n1-i;                //Most important step

            // Since a[i]>b[j] and i<j and a[i], a[i+1], a[i+2]...a[] all wil be inversion case
            // Since inversion becomes n1-that number index, since all of the after will be a inversion

            k++; j++;

        }
    }

    while(i<n1){
        arr[k]=a[i];
        k++;  i++;
    }

    while(j<n2){
        arr[k]=b[j];
        k++;  j++;
    }   

    return inv;

}


long long mergeSort(int arr[], int l, int r){

    long long inv = 0;

    if(l<r){

        int mid=(l+r)/2;

        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid+1, r);
        inv += merge(arr, l, mid, r);

    }

    return inv;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<mergeSort(arr,0,n-1);

    return 0;
}