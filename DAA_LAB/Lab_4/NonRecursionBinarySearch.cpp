#include<iostream>
using namespace std;

int binarySearch(int array[],int val,int low,int high){

    while (low <= high){

        int mid = low + (high - low);
        if(array[mid] == val){
            return mid;
        }
        else if(array[mid]<val){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
   return -1;

}

int main(){
    int n,arr[50],val;
    cout<<"Enter the length of an array : ";
    cin>>n;
    cout<<"Enter Values in Sorted manner :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value to find in array : ";
    cin>>val;
    
    if(binarySearch(arr,val,0,n-1)==-1){
        cout<<"Value is not present in array";
    }else{
        cout<<"Value found";
    }    
    return 0;
}