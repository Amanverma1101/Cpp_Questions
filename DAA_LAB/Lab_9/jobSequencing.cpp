#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of jobs : ";
    cin>>n;
    int cost[n],pid[n];
    cout<<"Enter Cost of each job :-\n";
    for(int i=0;i<n;i++){
        cin>>cost[i];
        pid[i] = i+1;
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(cost[j]>cost[j+1]){
                int temp = cost[j];
                cost[j] = cost[j+1];
                cost[j+1] = temp;

                int tmp = pid[j];
                pid[j] = pid[j+1]; 
                pid[j+1] = tmp;
            }
        }
    }

    cout<<"Order of Execution is :- \n";
    for(int i=n-1;i>=0;i--){
        cout<<pid[i]<<" ";
    }
    return 0;
}    