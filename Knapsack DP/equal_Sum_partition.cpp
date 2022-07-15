#include<bits/stdc++.h>
using namespace std;
bool find_subset(int wt[], int sum, int n){
    bool t[n+1][sum+1];
   for(int i=0;i<n+1;i++)
   {
       for(int j=0; j<sum+1;j++)
       {
           if(i==0){t[i][j]=false;}
           if(j==0){t[i][j]=true;}
          
        }
   }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
             if(wt[i-1]<=j){
               t[i][j]=t[i-1][j-wt[i-1]] || t[i-1][j];
           }
           else{
               t[i][j]=t[i-1][j];
           }
        }
    }
   return t[n][sum];
}


int main(){
    //sum of all array elements should be even i.e. (2S) 
    //scince we need to T/F if 2 subsets are present with equal sum i.e.(S)
    //we can also say that S1=S2 or S1-S2=0,
    int a[]={3,4,5,10}, sum=0;
    int n= sizeof(a)/sizeof(a[0]);
    cout<<"Hello World \n";
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    if(sum%2 !=0){
        cout<<"False";
        return 0;
    }
    else{
       if(find_subset(a,sum/2,n)){cout<<"True";}
       else{cout<<"False";} 
    }
    return 0;
}