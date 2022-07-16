#include<iostream>
using namespace std;

int main(){
    int a[10][10],b[10][10],m,n;
    cout<<"Enter the length of row of matrix : ";
    cin>>n;
    cout<<"Enter the length of column of matrix : ";
    cin>>m;
    cout<<"Enter Values in the First Matrix :-"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>a[i][j];
        }
    }
    cout<<"Enter Values in the Second Matrix :-"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>b[i][j];
        }
    }
    cout<<"Sum of both the Matrix :-"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;
}