#include<iostream>
using namespace std;

int main(){
    int h=1,n;
    n = 4;
    float x0 = 1,y,p=1,u;
    float x = 0;
    float arr[] = {1,2,3,4};
    float diff[n][n];
    int tmp = 3;
    for(int i=0;i<n;i++){
        diff[i][0]=tmp;
        tmp = tmp*3; 
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            diff[j][i] = diff[j+1][i-1] - diff[j][i-1]; 
        }
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
            if(i+j<n){
                cout<<diff[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
    u = (x-x0)/h;

    return 0;
}