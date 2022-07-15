#include <bits/stdc++.h>
using namespace std;

int countsubset(int arr[], int n, int sum)
{
    bool dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {

            if (i == 0)
            {
                dp[i][j] = false;
            }
            if (j == 0)
            {
                dp[i][j] = true;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = (dp[i - 1][j - arr[i - 1]] || dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    int s1;
    for(int j=sum;j>=0;j--)
    {
        if(dp[n][j]==true)
        {
            s1=j;
            break;
        }
    }
    return s1;
}


int main()
{
    int arr[] = {1,6,11,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int add=0;
    for(int k=0;k<n;k++)
    {
        add+=arr[k];
    }
    int sum = add/2;
    int s1 = countsubset(arr,n,sum);
    int ans = add-(2*s1);
    cout<<ans;
    return 0;
}