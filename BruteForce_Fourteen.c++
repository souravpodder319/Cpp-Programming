#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
   
    while (T--){
        int n;
        cin>>n;
        char arr[n][4];
        int pos[n];
       
        for(int i=0; i<n; i++){
            for (int j=0; j<4; j++){
                cin>> arr[i][j];
                if(arr[i][j]=='#'){
                    pos[i]=j+1;
                 }
                }
            }
           
         for(int i=n-1; i>=0; i--){
            cout<<pos[i]<<" ";
         }
         cout<<endl;
    }

        return 0;

    }
