#include <bits/stdc++.h>
using namespace std;
int main(){

    char arr[8][8];
   
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>> arr[i][j];
        }
    }

    int r,c;
   for(int i=0; i<8; i++){
    
        for(int j=0; j<8; j++){
            if(arr[i][j]=='*'){
               r=i; c=j;
              break;
            }
        }
    }



    cout<<char(97+c)<<8-r<<endl;


    return 0;
}