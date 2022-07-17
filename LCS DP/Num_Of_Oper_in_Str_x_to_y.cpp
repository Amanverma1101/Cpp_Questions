#include<bits/stdc++.h>
using namespace std;
//Here we need to return No. of Operations (i.e insertions and Deletions) required to convert from string A to B
// No. of deletions is = Len(String A) - LCS
//No. of insertions is = Len(String B) -LCS
//So, the No. of Operations is = No. of insertions + No. of Deletions
// i.e. Len(Str A + Str B) - 2 x LCS
int Count_Operations(string x, string y, int n, int m){
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

  return ((m+n)-(2*dp[m][n]));
}


int main(){
    string x="heap",y="peas";
  int n=x.size(), m=y.size();
    cout<<"Hello World "<<n<<" & "<<m<<"\n";

   cout<<Count_Operations(x,y,n,m);    
    return 0;
}