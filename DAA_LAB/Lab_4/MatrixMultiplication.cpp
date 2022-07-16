#include<iostream>
using namespace std;

int main(){
    int a[10][10],b[10][10],c[10][10],n;
    cout<<"Enter the length of Size of all the matrix : ";
    cin>>n;
    cout<<"Enter Values in the First Matrix :-"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>a[i][j];
        }
    }
    cout<<"Enter Values in the Second Matrix :-"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j] = 0;
           for(int k=0;k<n;k++){
               c[i][j] = c[i][j] + a[i][k]*b[k][j];
           }
        }
    }

cout<<"Mutltiplication of both the matrix is :-"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}