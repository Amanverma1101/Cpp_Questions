#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int partition(int arr[], int start ,int end){
    int pi = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if(arr[i]<=pi){
            count++;
        }
    }
    int pin = start+count;
    swap(arr[pin],arr[start]);

    int i=start , j=end;    
    while(i<pin &&  j>pin){
        while (arr[i] <= pi) {
            i++;
        }
        while (arr[j] > pi) {
            j--;
        }
        if (i < pin && j > pin) {
             swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pin;
}
void quicksort(int arr[],int start,int end){
    if (start >= end)
        return;
    int p = partition(arr, start, end);
    quicksort(arr, start, p - 1);
    quicksort(arr, p + 1, end);
}

int main(){
    int n,r,arr[50];
    cout<<"\nEnter length : ";
    cin>>n;
    cout<<"Enter values : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nThe Sorted array is :- ";
    quicksort(arr, 0, n - 1);
    print(arr,n);
    return 0;
}