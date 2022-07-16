#include<iostream>
using namespace std;

int knapsack(int wt[], int val[], int w, int n){
    int t[n+1][w+1];
   for(int i=0;i<n+1;i++)
   {
       for(int j=0; j<w+1;j++)
       {
           if(i==0||j==0){
               t[i][j]=0;
               cout<<t[i][j]<<" ";
           }
           else if(wt[i-1]<=j){
               t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
               cout<<t[i][j]<<" ";
           }
           else if(wt[i-1]>j){
               t[i][j]=t[i-1][j];
               cout<<t[i][j]<<" ";
           }
       }
       cout<<endl;
   }
   return t[n][w];
}

int main()
{
    int n,w;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<"Enter Max Weight : ";
    cin>>w;
    cout<<"Enter Weight  and Value of each item :-\n";
    int wt[n],val[n];
    for(int i=0;i<n;i++){
        cout<<"Weight "<<i+1<<" --> ";
        cin>>wt[i];
        cout<<"Value "<<i+1<<" --> ";
        cin>>val[i];
    }
    cout<<"\nMatrix is : \n";
    int ans = knapsack(wt,val,w,n);
    cout<<"\nMax Profit is : "<<ans;
    return 0;
}