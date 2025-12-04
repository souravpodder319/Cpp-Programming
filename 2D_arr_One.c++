#include <bits/stdc++.h>
using namespace std;
int main (){
   
    int a, b;
    cin>> a>> b;
    char arr[a][b];

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++) {
             cin>> arr[i][j];
            }
        }

        int ans=0;
         for(int i=0; i<a; i++){
        for(int j=0; j<b; j++) {
             if(arr[i][j]=='#'){

                ans++;
             }
            }
           
        }
        cout<<ans<<endl;

     
    return 0;
    }