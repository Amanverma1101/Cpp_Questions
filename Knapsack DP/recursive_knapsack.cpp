#include<bits/stdc++.h>
using namespace std;
//returns max profit
int knapsack(int wt[], int val[], int w, int n){
    if(n==0||w==0){
        return 0;
    }
    if(wt[n-1]<=w){
        return max(val[n-1]+knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val, w, n-1));
    }
    else if(wt[n-1]>w){
        return knapsack(wt, val, w, n-1);
    }    
}


int main(){
    int wt[]={12,13,15,19}, val[]={6,10,12,1},w=28+12+19;
    int n= sizeof(val)/sizeof(val[0]);
    cout<<"Hello World" <<w<<"\n";
    cout<< knapsack(wt, val, w, n);
    return 0;
}