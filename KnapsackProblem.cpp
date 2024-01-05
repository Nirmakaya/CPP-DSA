#include<iostream>
using namespace std;

//Famous Problem of 0-1 Knapsack

int knapsack(int value[], int wt[], int n, int W){

    if(n==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value, wt, n-1, W);         //Since weight is heavy then don't include that element
    }

    // knapsack(value, wt, n-1, W-wt[n-1]) + value[n-1];       //Case where n-1 element is included, and it value is added and wieght is subtracted
    // knapsack(value, wt, n-1, W);                            //Case where n-1 element is not included

    // max of both will decide whether to include it or not

    return max(knapsack(value, wt, n-1, W-wt[n-1]) + value[n-1], knapsack(value, wt, n-1, W));
}

int main(){

    int wt[] = {10,20,30};
    int value[] = {100,50,150};
    int W = 50;

    cout<<knapsack(value, wt, 3, W);

    return 0;
}