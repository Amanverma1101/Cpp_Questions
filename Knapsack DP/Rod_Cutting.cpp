#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[], int val[], int w, int n){
    int t[n+1][w+1];
   for(int i=0;i<n+1;i++)
   {
       for(int j=0; j<w+1;j++)
       {
           if(i==0||j==0){
               t[i][j]=0;
           }
           else if(wt[i-1]<=j){
               //here the only change is : if we r taking the value once then it will also b considered other time 
               // and the value we r not taking then it will not b considered other time.
               t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
           }
           else if(wt[i-1]>j){
               t[i][j]=t[i-1][j];
           }

       }
   }
   return t[n][w];
}


int main(){
    int wt[]={1,50}, val[]={1,30},w=100;
    int n= sizeof(val)/sizeof(val[0]);
    cout<<"Hello World\n";
    cout<< knapsack(wt, val, w, n);
    return 0;
}