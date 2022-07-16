#include<iostream>
using namespace std;

int nCr(int n,int r){
    if(r==0 || n==r){
        return 1;
    }
    else if(r>0 && r<n){
        return nCr(n-1,r-1)+nCr(n-1,r);
    }
    else{
        return 0;
    }
}

int main(){
    int n,r;
    cout<<"\nEnter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    cout<<"\nThe value of "<<n<<"C"<<r<<" is : "<<nCr(n,r);
    return 0;
}