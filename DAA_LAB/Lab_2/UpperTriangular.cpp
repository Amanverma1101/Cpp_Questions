#include<iostream>
using namespace std;

int main(){
   int a[100][100],n;
    cout<<"Enter Size of Matrix : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j)
                a[i][j]=1;
            else
                a[i][j]=0;
        }
    }

cout<<"Upper Triangular matrix is :-"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}