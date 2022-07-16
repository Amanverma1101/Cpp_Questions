#include<iostream>
using namespace std;

int main(){
    int a[10][10],b[10][10],n;
    cout<<"Enter the size of the matrix : ";
    cin>>n;
    cout<<"Enter Values :-\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1||i==j||i+j==n-1){
                b[i][j]=0;
            }    
            else{
                b[i][j]=a[i][j];
            }
        }
    }
    cout<<"Modified Matrix is :-\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}