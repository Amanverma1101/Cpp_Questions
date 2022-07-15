#include<bits/stdc++.h>
using namespace std;
int count_subset(int wt[], int sum, int n){
    //this will return no. of subset with given sum
    int t[n+1][sum+1];
   for(int i=0;i<n+1;i++)
   {
       for(int j=0; j<sum+1;j++)
       {
           if(i==0){t[i][j]=0;}
           if(j==0){t[i][j]=1;} 
        }
   }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
             if(wt[i-1]<=j){
               t[i][j]=t[i-1][j-wt[i-1]] + t[i-1][j];
           }
           else{
               t[i][j]=t[i-1][j];
           }
        }
    }
   return t[n][sum];
}


int main(){
    int wt[]={1,3,4,5,2,2}, s=5;
    int n= sizeof(wt)/sizeof(wt[0]);
    cout<<"Hello World \n";

        cout<<count_subset(wt, s, n);
    
    return 0;
}