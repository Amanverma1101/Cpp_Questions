// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

//function prototype added
void merge(int arr[],int low,int mid,int high);

void mergesort(int arr[],int low, int high)
{
    if(low<high)
    {
        int mid = low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }else{
        return;
    }
}

//int->void
void merge(int arr[],int low,int mid,int high)
{
    int k=low;
    int i = low;
    int j = mid + 1;
    int b[10];
    //j->i
    while (i<=mid && j<=high)
    {
        if(arr[i]<=arr[j])
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            j++;
            k++;
        }
    }

    if(i>mid)
    {
    while (j <=high)
    {
    //    arr[k] = b[j];
        b[k] = arr[j];
        j++;
        k++;
    }
    }
    
    if(j>high) {

    while (i <=mid)
    {
   //    arr[k] = b[j];
        b[k] = arr[i];
        i++;
        k++;
    }
    }
    for(int k=low;k<=high;k++)
    {
        arr[k] = b[k];
    }
}
void printArray(int A[], int size)
{
    for(int i = 0; i < size; i++)
        // printf("%d ", A[i]);
        cout<<A[i]<<" ";
         
    cout << "\n";
}
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergesort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}