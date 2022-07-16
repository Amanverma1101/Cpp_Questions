#include<iostream>
using namespace std;
int main() {
    int n;
    float x;
    cout<<"Enter the value of X : ";
    cin>>x;
    cout<<"Enter the value of n : ";
    cin>>n;
    float p=1;
    for(int i=0;i<n;i++){
        p = p*x;
    }
    cout<<"Value of "<<x<<"^"<<n<<" is : "<<p;
    return 0;
}