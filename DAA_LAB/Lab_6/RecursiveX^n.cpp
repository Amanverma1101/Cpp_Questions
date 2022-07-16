#include<iostream>
using namespace std;

float exp(float x,int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return x;
    }else if(n<0){
        cout<<"Not a valid input"<<endl;
        return -1;
    }else{
        if(n%2==0){
            return exp(x,n/2)*exp(x,n/2);
        }else{
            return exp(x,1)*exp(x,n-1);
        }
    }
}


int main() {
    int n;
    float x;
    cout<<"Enter the value of X : ";
    cin>>x;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Value of "<<x<<"^"<<n<<" is : "<<exp(x,n);
    return 0;
}