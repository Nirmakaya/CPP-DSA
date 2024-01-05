#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;

    for(int i=0;i<n/2;i++){

        if( arr[i] != arr[n-1-i]){          //n-1 is last element and -i is to update check for next iteration
            check=0;
            break;
        }

    }

    // cout<<(sizeof(arr)/sizeof(arr[0]))<<endl;

    // cout<<arr[-1]<<endl;

    if(check == true){
        cout<<"PALINDROME";
    }else{
        cout<<"NOT PALINDROME";
    }



    return 0;
}

