#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>> a>> b;
    int arr[a][b];

    for(int i=0; i<a; i++){
        for( int j=0; j<b; j++){
            cin>> arr[i][j];
        }
    }

    int mx[b], mn[a];
     for( int j=0; j<b; j++){
        mx[j]=-2000;
        for(int i=0; i<a; i++)
       {
          if(arr[i][j]>mx[j]){
            mx[j]= arr[i][j];

          }
        }
    }

    for( int i=0; i<a; i++){
        mn[i]=2000;
        for(int j=0; j<b; j++)
       {
          if(arr[i][j]<mn[i]){
            mn[i]= arr[i][j];
          }
        }
    }

    int ans=0;
    
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(arr[i][j]==mn[i] && arr[i][j]==mx[j]){
                ans++;
            }
        }
    }

    cout<<ans<<endl;
    

    return 0;
}