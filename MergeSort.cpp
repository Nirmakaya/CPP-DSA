#include<iostream>
using namespace std;

//Time Complexity will atleast be O(n!) if we are printing n factorial as output it cannot be lesser than that

//Divide and Conquer Algorithm

void merge(int arr[], int l, int mid, int r){             //Here in the arr from l to mid and mid+1 to r is sorted we need to merge them

    int n1= mid-l+1;        //Size of array
    int n2= r-mid;

    int a[n1];              //Created 2 temporary arrays
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    //We have created two pointer to traverse over both the temp array, pointers of while loop

    int i=0;            //To traverse over a[]            
    int j=0;            //To traverse over b[]
    int k=l;            //To traverse over main array arr[]

    while(i<n1  && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }else{
            arr[k]=b[j];
            j++;
            k++;
        }        
    }

    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }

    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }

}

void mergeSort(int arr[], int l, int r){              //Here l and r are the starting and ending index for each Divided array

    if(l<r){                //When l become equal to r means there is only one element in the array

        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr,l,mid,r);                 //Since we haven't created a new array to Store the answer

    }
}

int main(){

    int arr[]={5,4,3,2,1};

    mergeSort(arr, 0, 4);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}