#include<iostream>
using namespace std;

int main(){
    int a[2][2],b[2][2],c[2][2];

    cout<<"Enter Value in first matxix"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter Value in second matxix"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    
    int p1,p2,p3,p4,p5,p6,p7;
    p1 = a[0][0]*(b[0][1]-b[1][1]);
    p2 = (a[0][0] + a[0][1])*b[1][1];
    p3 = (a[1][0]+a[1][1])*b[0][0];
    p4 = a[1][1]*(b[1][0]-b[0][0]);
    p5 = (a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
    p6 = (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
    p7 = (a[0][0] - a[1][0])*(b[0][0]+b[0][1]);
    
    c[0][0] = p5+p6-p2+p4;
    c[0][1] = p1+p2;
    c[1][0] = p3+p4;
    c[1][1] = p1+p5-p3-p7;
    
    cout<<"Multiplication of both the matrix are :-"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}