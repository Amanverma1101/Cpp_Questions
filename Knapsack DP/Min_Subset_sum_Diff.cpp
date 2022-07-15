      //we need to find the min diff between the subsets S1-S2=minimum,
      //s1+s2=sum So, sum-2S1 = min(>=0)
      //So, [s1<=sum/2]
#include<bits/stdc++.h>
using namespace std;
int count_subset(int wt[], int sum, int n){
    //this will return T/F if given sum is can b otained from subset
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
    int s1;
    //this will return max value of sum from subset 
    for(int j=sum;j>=0;j--){
        if(t[n][j]== true){
            s1=j;
            break;
        }
    }
   return s1;
}


int main(){
    int wt[]={1,12,6,9,20},sum=0; 
    int n= sizeof(wt)/sizeof(wt[0]);
    cout<<"Hello World \n";
    for(int i=0;i<n;i++){
        sum += wt[i];
    }
    cout<<"Sum of array  "<<sum<<endl;
    int s1=count_subset(wt, sum/2, n);
    cout<<"value of s1  "<<s1<<endl;
    cout<<"Ans is  "<<sum-2*s1;

    
    return 0;
}