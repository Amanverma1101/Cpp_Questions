#include<iostream>
using namespace std;

int main(){
    int n,arr[50],val;
    cout<<"Enter the length of an array : ";
    cin>>n;
    cout<<"Enter Values :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value to find in array : ";
    cin>>val;
    int flag=-1;
    for(int i=0;i<n;i++){
        if(val==arr[i]){
            flag=1;
        }
    }
    if(flag>0){
       cout<<"Value found";
    }else{
       cout<<"Value is not present in array";
    }

    return 0;
}