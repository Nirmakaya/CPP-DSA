#include<iostream>
using namespace std;

//In this we will look at the importance of return statement and wherther the recurring function is placed before or after the output statement

int firstOcc(int arr[], int n, int i, int key){             //Here int i will be used as a for loop in recursion, to traverse over all the elements. It will be initialised with 0 and represents the index of the array

    if(i==n){                           //Since i starts from 0, when i=n and array ends at i=n-1, means all the elements are checked when i becomes n
        return -1;
    }

    if(arr[i]==key){                    //Here, code is such if the key is found then we will not even check the rest of the reccursions
        return i;
    }
    
    return firstOcc(arr,n,i+1,key);             //Here return firstOcc() has to be placed and not just firstOcc()
}

//In this lastOccurence we will not start from the end we will start from the start to learn something about the nature of recuurtion

int lastOcc(int arr[], int n, int i, int key){

    //In this the first the function will go to the last element and then starts the check, hence last index will be the output

    if(i==n){
        return -1;
    }

    int restArray = lastOcc(arr,n,i+1,key);

    if(restArray != -1){                    //This will get till the last staement and then the next lines of codes will execute
        return restArray;
    }

    if(arr[i]==key){                    //Last check of 0th index in case all the rest of the restArray returns -1
        return i;
    }
    return -1;              //Means when lastArray reuturns -1 and the first index is also not equals to key then give -1


}

int main(){

    int arr[] = {4,2,1,2,5,2,7};

    cout<<firstOcc(arr,7,0,2)<<endl;
    cout<<lastOcc(arr,7,0,2)<<endl;
    
    return 0;
}
