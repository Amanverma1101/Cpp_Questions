#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std; 
 
 int fact(int n){
        int p=1;
        while(n>1){
            p*=n;
            n--;
        }
        return p;
    }
    int ncr(int n,int r){
        //cout<<n<<" ";
        return fact(n)/(fact(r)*fact(n-r));
    }

    int numIdenticalPairs(vector<int> nums) {
        unordered_map<int,int> m;
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
          //  cout<<"m["<<nums[i]<<"]++; = "<<m[nums[i]]<<endl;
        }
        
        for(auto it=m.begin();it!=m.end();it++){
          //  cout<<m[nums[i]]<<" ";
            if((*it).second>1){
                sum+=ncr((*it).second,2);
            }
        }
        
       // cout<<endl;
        
        return sum;        
    }

    int main(){
        vector<int> num={6,5,1,5,7,7,9,1,5,7,1,6,10,9,7,4,1,8,7,1,1,8,6,4,7,4,10,5,3,9,10,1,9,5,5,4,1,7,4,2,9,2,6,6,4,2,10,3,5,3,6,4,7,4,6,4,4,6,3,4,10,1,10,6,10,4,9,6,6,4,8,6,9,5,4};
        cout<<numIdenticalPairs(num);
        return 0;
    }