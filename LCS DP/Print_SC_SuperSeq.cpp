#include<bits/stdc++.h>
using namespace std;
string print_LCS(string x, string y, int m, int n){
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

int i=m,j=n;
string str;
while(i>0 && j>0){
    if(x[i-1]==y[j-1]){
        str.push_back(x[i-1]);
        i--;
        j--;
    }else if(dp[i-1][j]>dp[i][j-1]){
        str.push_back(x[i-1]);
        i--;
    }else{
        str.push_back(y[j-1]);
        j--;
    }
}
reverse(str.begin(),str.end());
  return str;
}


int main(){
    string x="abcdgh",y="abedfha";
  int m=x.size(), n=y.size();
    cout<<"Hello World "<<m<<" & "<<n<<"\n";
   cout<<print_LCS(x,y,m,n);    
    return 0;
}