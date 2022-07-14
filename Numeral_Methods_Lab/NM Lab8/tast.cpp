#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cout<<"Enter Number of Elements : ";
 cin>>n;
 cout<<"Enter Initial value of x and h :-\n";
 float x[n],h;
 cin>>x[0]>>h;
 for(int i=1;i<n;i++){
     x[i] = x[i-1]+h;
 }
 float y[n][n];
 cout<<"Enter Y Values :-\n";
 for(int i=0;i<n;i++){
     cin>>y[i][0];
 } 
 for (int i = 1; i < n; i++) {
  for (int j = 0; j < n - i; j++)
   y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
 }
cout<<"\nX\tY\tdy\td2y\td3y\n\n";
  for (int i = 0; i < n; i++){
  cout <<x[i]<< "\t";
  for (int j = 0; j < n - i; j++)
   cout<<y[i][j]<<"\t";
  cout << endl;
 }
 float value,nr=1.0,dr=1.0;
 cout<<"\nEnter the Value to interpolate at : ";
 cin>>value;
 float sum = y[0][0];
 float u = (value - x[0]) / h;
 for(int k=1;k<n;k++){
     nr *= u-k+1;
     dr *= k;
     sum += (nr/dr)*y[0][k];
 }
 cout<<" Value at "<<value<<" is "<<sum<<endl;
 return 0;
}