#include <iostream>
#include<stack>
#include<string>

using namespace std;
bool isValid(string s) {
      int out=0;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }else if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[')){
                st.pop();
             }else{
                st.push(s[i]);
               }
            }              
        
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
int main()
{
   
    if (isValid("([)]")){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
