#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;             
 cout<<"Enter Number of Elements : ";
 cin>>n;
 cout<<"Enter values of x:-\n";
 float x[n],h;
 for(int i=0;i<n;i++){
    cin>>x[i];
}
 float y[n][n];
 cout<<"Enter Y Values :-\n";
 for(int i=0;i<n;i++){
     cin>>y[i][0];
 } 
 for (int i = 1; i < n; i++) {
  for (int j = 0; j+i<n; j++){
   y[j][i] = (y[j+1][i - 1] - y[j][i - 1])/(x[j+i]-x[j]);
  }
 }
 cout<<"\nX\tY\tdy\td2y\td3y\td4y\n\n";
  for (int i = 0; i < n; i++){
  cout <<x[i]<< "\t";
  for (int j = 0; j+i<n; j++)
   cout<<y[i][j]<<"\t";
  cout << endl;
 }
 float value,nr=1.0,dr=1.0;
 cout<<"\nEnter the Value to interpolate at : ";
 cin>>value;
 float sum = y[0][0];
 for(int k=1;k<n;k++){
     nr *= value-x[k-1];
     sum += nr*y[0][k];
 }
 cout<<" Value at "<<value<<" is "<<sum<<endl;
return 0;
}