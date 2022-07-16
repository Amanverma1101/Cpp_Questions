#include<iostream>
using namespace std;
void print(double arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter Number of items : ";
    cin>>n;
    double wt[n],val[n];
    double vw[n];
    int c;
    cout<<"Enter weight of items :-\n";
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    cout<<"Enter value of items :-\n";
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    cout<<"Enter Capacity of Bag : ";
    cin>>c;
    for(int i=0;i<n;i++){
        vw[i] = (double)(val[i]/wt[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(vw[j]>vw[j+1]){
                int temp = vw[j];
                vw[j] = vw[j+1];
                vw[j+1] = temp;

                int tmp = val[j];
                val[j] = val[j+1]; 
                val[j+1] = tmp;

                int tp = wt[j];
                wt[j] = wt[j+1]; 
                wt[j+1] = tp;
            }
        }
    }
    print(vw,n);
    print(wt,n);
    print(val,n);
	int cw = 0; 
	double p = 0.0; 
	for (int i = 0; i < n; i++) {
		if (cw + wt[i]<= c) {
			cw += wt[i];
			p += val[i];
		}
		else{
			int remain = c - cw;
			// p += val[i]*((double)remain/(double)wt[i]);
			p += vw[i]*(double)remain;
			break;
		}
	}
 cout<<"Earned Profit is : "<<p<<" "<<cw;
 return 0;
}