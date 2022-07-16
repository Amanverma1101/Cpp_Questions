#include<iostream>
using namespace std;

int main(){
    char a[4][4];
      for (int i = 0; i < 4; i++) {
          if(i==1){
              a[0][i]='X';
          }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]=='X'){
                for(int m=0;m<4;m++){
                    for(int p=0;p<4;p++){
                        a[p][j]=='O';
                        
                    }
                }
            }
        }
    }
}