#include <bits/stdc++.h>
using namespace std;

int solve(int arr[],int i,int j){
    
    if(i>=j){
        return 0;
    }

    int mn = INT_MAX;
    for(int k=i;k<j;k++){
        int temp = solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        if(mn>temp){
            mn = temp;
        }
    }

    return mn;
}

int main()
{
    int arr[]={10,20,30,40,30};
    int n = sizeof(arr)/sizeof(arr[0]); 
    //here i!=0  brcause for calulating size it needs arr[i-1]xarr[i]    
    cout<<solve(arr,1,n-1);
    return 0;
}   