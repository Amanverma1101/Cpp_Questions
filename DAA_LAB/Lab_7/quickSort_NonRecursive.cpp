#include<bits/stdc++.h>
using namespace std;


void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int partition(int arr[],int l,int h)
{
    int piv=arr[h]; 
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(arr[j]<piv)
        {   
            i++;
            if(i!=j)
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[h]);
    return i+1;
}
void quicksort(int arr[],int l,int h)
{
    stack<pair<int,int>> s;
    s.push({l,h});
    while(!s.empty())
    {
        pair<int,int>p=s.top();
        s.pop();
        int start=p.first;
        int end=p.second;
        int piv=partition(arr,start,end);
        if(piv-1>start)
        s.push({start,piv-1});
        if(piv+1<end)
        s.push({piv+1,end});
    }
}

int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :- ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    quicksort(arr,0,n-1);
    cout<<endl<<"Sorted Array : ";
    print(arr,n);
    return 1;
}
