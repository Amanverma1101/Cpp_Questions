#include<iostream>
using namespace std;

int main(){
    int n,arr[20];
    cout<<"Enter No. of elements : ";
    cin>>n;
    cout<<"Enter array elememnts : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(temp<arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}