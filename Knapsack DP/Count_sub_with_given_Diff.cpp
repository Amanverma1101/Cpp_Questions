//Here the difference is given between the subsets (S1-S2=Diff)
//So, we can calculate the sum of the array(S1+S2=Sum (of the array))
//thererfore, S1= (Sum+Diff)/2

#include<bits/stdc++.h>
using namespace std;
int count_subset(int a[], int sum, int n){
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
             if(a[i-1]<=j){
               t[i][j]=t[i-1][j-a[i-1]] + t[i-1][j];
           }
           else{
               t[i][j]=t[i-1][j];
           }
        }
    }
   return t[n][sum];
}


int main(){
    int a[]={1,3,1,2}, sum=0, diff=10;
    int n= sizeof(a)/sizeof(a[0]);
    cout<<"Hello World \n";
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
        cout<<count_subset(a, (sum+diff)/2, n);
    
    return 0;
}