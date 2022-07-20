#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int , int> m;
    m[1] = 3;
    m[2] = 5;
    m[2] = 2;
    m[1] = 5;
    int arr[3]={0,1,2};
    for(int i=0;i<2;i++){
         auto it = m.find(arr[i]);
                if(it == m.end()){
                    m[arr[i]]=69;
                }else{
                    m[arr[i]]=30;
                }
    }

    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}