#include<iostream>
#include<math.h>
using namespace std;

#define e 2.718
// #define f(x) pow(e,(-1*(x*x)))
#define f(x) x

int main(){
    double x[100],y[100],tsum=0.0,s13sum=0.0,s38sum=0.0;
    double i,a,b;
    int n;
    a=1.0;
    b=2.0;
    x[0]=a;
    cout<<"Enter Subinterval : ";
    cin>>n;
    x[n]=b;
    double h = (b-a)/(double)n;
    for(int i=0;i<=n;i++){
        y[i] = f(x[i]);
        if(i==n){
            goto calculation;
        }
        x[i+1] = x[i]+h;
    }
   calculation:
    for(int i=0;i<n;i++){
        tsum += (h/2)*(y[i]+y[i+1]);
    }
    for(int i=0;i<n-1;i=i+2){
        s13sum += (h/3)*(y[i]+4*y[i+1]+y[i+2]);
    }
    for(int i=0;i<n-2;i=i+3){
        s38sum += ((3*h)/8)*(y[i]+3*y[i+1]+3*y[i+2]+y[i+3]);
    }
   cout<<"\nBy Trapezoidal method : "<<tsum<<endl;
   cout<<"By Simpson's 1/3 method : "<<s13sum<<endl;
   cout<<"By Simpson's 3/8 method : "<<s38sum;
   return 0;
}