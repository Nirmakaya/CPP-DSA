#include<iostream>
using namespace std;

//Google Kickstart Question

int main(){

    int n;
    cin>>n;
    int arr[n+1];               //Since we have to check till i+1 in every step, hence an extra array is used arr[n+1] instead of arr[n]
    arr[n]=-1;                  //We have to compare the i+1th element, so a negative number of visitor which isn't posssible is used for continous check

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //if an array of only one element is created

    if(n==1){                       //if in question n starts from two isn't given we can use first as record break day. 
        cout<<"1"<<endl;            
        return 0;                       //To move outside of the main loop
    }

    int ans=0;                      //Number of record breking days is maintained in ans
    int mx=-1;                      //maximum of all the arrays till the current array

    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(mx, arr[i]);               //Here we have decreased the time comlplexity from O(n^2) to O(n) as asked in question using max function
        
    }

    cout<<ans<<endl;
    
    
    return 0;
}