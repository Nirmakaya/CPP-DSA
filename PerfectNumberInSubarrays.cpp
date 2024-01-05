#include<iostream>
#include<math.h>
using namespace std;

//Perfect Number : is a number which have sum of all it's factors or "Proper Divisor" equal to the number itself


//Completing the stub Function isNumberPossible
bool isNumberPerfect(int n){

    int sum=1;

    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            if(i == n/i){
                sum += i;
            }else{
                sum += i + n/i;
            }
        }
    }

    if(sum == n && n!=1){
        return true;
    }
    return false;
}

int maxSum(int arr[], int n, int k){

    if(n < k){
        cout<<" Invalid Values "<<endl;
        return -1;
    }

    int res = 0;
    //For first k Sum
    for(int i=0; i<k; i++){
        res += arr[i];
    }

    int sum = res;
    //Sliding window or Two pointer Approach Step
    for(int i=k; i<n; i++){
        sum += arr[i] - arr[i-k];
        res = max(res, sum);
    }
   
    return res;
}

int maxNumberOfPerfects(int arr[], int n, int k){

    for(int i=0; i<n; i++){
        if(isNumberPerfect(arr[i])){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }
    }
    //Converted the array into a binary array

    return maxSum(arr, n, k);
}

int main(){

    int arr[] = {28, 2, 3, 6, 496, 99, 8128, 24};
    int k = 4;
    int n = 8;

    cout<< maxNumberOfPerfects(arr, n, k);

    return 0;
}