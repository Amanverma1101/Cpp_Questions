#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string s,int i, int j){
    string ns;
    for(int p=i;p<=j;p++){
        ns.push_back(s[p]);
    }
    reverse(ns.begin(),ns.end());
    cout<<ns;
}

int main(){
    isPalindrome("Star",0,3);
    return 0;
}