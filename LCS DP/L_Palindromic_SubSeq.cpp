#include<bits/stdc++.h>
using namespace std;
//Here we need to return the Length of Longest palindromic SubSequence from a string
//Example if String: "agexea" is given 
//then no. of palindromic subsequences are: "exe","aexea"
//So, the longest is aexea  
int Len_LPS(string x, int n){
  string  y = x;
  reverse(y.begin(),y.end());
  int m=y.size();
int dp[m+1][n+1];
for(int i=0;i<m+1;i++){
    for(int j=0;j<n+1;j++){
    if(i==0||j==0){
        dp[i][j]=0;
    }
  }
}  
for(int i=1;i<m+1;i++){
    for(int j=1;j<n+1;j++){
    if(x[i-1]==y[j-1]){
        dp[i][j] = 1 + dp[i-1][j-1];
    }else {
        dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
    }
   }
  }

  return dp[m][n];
}


int main(){
    string x="agbeba";
  int n=x.size();
    cout<<"Hello World "<<n<<"\n";

   cout<<Len_LPS(x,n);    
    return 0;
}