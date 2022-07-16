#include<iostream>
using namespace std;

int main(){
    int n,a[100],comp=0;
    cout<<"Enter the length of Array : ";
    cin>>n;
    //Input of array Elements
    cout<<"Enter Array Elements :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Insertion Sort Algorithm
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = a[i]; 
        j = i - 1; 
        while (j >= 0 && a[j] > key)
        { 
            a[j + 1] = a[j]; 
            j = j - 1; 
            comp++;
        } 
        a[j + 1] = key; 
        if(key>a[j]){
            comp++;
        }
    } 
    // Printing array
    cout<<"Sorted Array is :-"<<endl;
    for (i = 0; i < n; i++)
    { 
        cout<<a[i] << " ";
    }
    cout<<"\nNo. of comparisons occured : "<<comp;
}

