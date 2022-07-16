#include<iostream>
using namespace std;
int main(){
    string s1,s2,s3;
    cout<<"Enter String1 : ";
    cin>>s1;
    cout<<"Enter String2 : ";
    cin>>s2;
    s3 = s1+s2;
    int i, j, n = s3.length(); 
    char key;
    for (i = 1; i < n; i++)
    { 
        key = s3[i]; 
        j = i - 1; 
        while (j >= 0 && s3[j] > key)
        { 
            s3[j + 1] = s3[j]; 
            j = j - 1; 
        } 
        s3[j + 1] = key; 
    } 
    cout<<"Merged String is : "<<s3;

}
    