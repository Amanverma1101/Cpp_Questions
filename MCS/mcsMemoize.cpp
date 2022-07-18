#include <bits/stdc++.h>
using namespace std;

int solve(int arr[],int i,int j){

    int t[30][30];
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            t[i][j]=-1;
        }
    }
    if(i==j){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }

    int mn = INT_MAX;
    for(int k=i;k<j;k++){
        int temp = solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        if(mn>temp){
            mn = temp;
        }
    }
    t[i][j]=mn;
    return t[i][j];
}

int main()
{
    int arr[]={10,20,30,40,30};
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<solve(arr,1,n-1);
    return 0;
}   