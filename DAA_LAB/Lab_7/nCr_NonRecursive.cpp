#include<iostream>
using namespace std;

int factorial(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p = p*i;
    }
    return p;
}

int nCr(int n,int r){
     return factorial(n)/(factorial(n-r)*factorial(r));
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