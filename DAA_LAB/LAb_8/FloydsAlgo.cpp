#include<iostream>
using namespace std;

int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
void print(int arr[20][20],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==j){
              arr[i][j]=0;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void floyds(int arr[20][20],int n){
    int mat[20][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j] = arr[i][j];
        }
    }
    for(int k=0;k<n;k++){
        cout<<"A-"<<k<<"-->\n";
        print(mat,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][k] != 0 && mat[k][j] != 0){
                    if(mat[i][j]==0){mat[i][j]=9999;}
                    mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }
    }
    cout<<"A-"<<n<<"-->\n";
    print(mat,n);
}
int main(){
    int n,arr[20][20];
    cout<<"Enter Number of Vertices : ";
    cin>>n;
    cout<<"Enter Weight of each Vertices :-\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    floyds(arr,n);
    return 0;
}