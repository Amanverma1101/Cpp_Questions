#include<iostream>
using namespace std;

int main(){
    int arr[10][10],n;
    cout<<"Enter the length of square matrix : ";
    cin>>n;
    cout<<"The Lower Triangular Square Matrix of order "<<n<<" is :-"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           arr[i][j]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
           arr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;
}