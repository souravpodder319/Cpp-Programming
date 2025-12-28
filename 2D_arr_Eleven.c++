#include <bits/stdc++.h>
using namespace std;
int main (){

    char arr [8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>> arr[i][j];
        }
    }

    int x,y;
        for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(arr[i][j]=='*'){
                x=i;
                y=j;

                cout<<(char)('a'+j )<<8-i;
            }
    
        }
  
    }

   
    return 0;
}