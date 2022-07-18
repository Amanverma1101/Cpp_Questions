#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string String, int i, int j)
{
    while(i < j)
    {
      if(String[i] != String[j])
        return false; 
      i++;
      j--;
    }
    return true;
}

int solve(string s,int i,int j){
    
    if(i>=j){
        return 0;
    }
    if(isPalindrome(s,i,j)){
        return 0;
    }

    int mn = INT_MAX;
    for(int k=i;k<j;k++){
        int temp = 1+solve(s,i,k)+solve(s,k+1,j);
        if(mn>temp){
            mn = temp;
        }
    }

    return mn;
}

int main()
{
    string s="abcde";
    int n = s.size();     
    cout<<solve(s,0,n-1);
    return 0;
}   