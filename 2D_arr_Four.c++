#include <bits/stdc++.h>
using namespace std;
int main (){

    int a,b;
    cin>>a>>b;

    char arr[a][b];

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>> arr[i][j];
        }
    }

    int free[b];

    for(int i=0; i<b; i++){
        int got=0;
        for(int j=0; j<a; j++){
            if(arr[j][i]=='x'){ // ← also fix here
                got=1;
                break;
            }
        }
        if(got==1){
            free[i]=0;
        }
        else{
            free[i]=1;
        }
    }

    int ans=0;
    for(int i=0; i<b; i++){
        if(free[i]==1){
            int len=1;
            for(int j = i+1; j<b; j++){
                if(free[j]==1){
                    len++;
                }
                else{
                    break;
                }
            }

            if(len>ans){
                ans = len;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
