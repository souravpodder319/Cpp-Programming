#include <bits/stdc++.h>
using namespace std;
int main (){
    
    int h, w, x, y;
    cin>>h>>w>>x>>y;
    x--, y--;

    char arr[h][w];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>> arr[i][j];
        }
    }

    int ans=1;

    for(int j=y+1; j<w; j++){
        if(arr[x][j]=='.') ans++;
        else{
            break;
        }
    }

    for(int j=y-1; j>=0; j--){
        if(arr[x][j]=='.') ans++;
        else{
            break;
        }
    }

     for(int i=x-1; i>=0; i--){
        if(arr[i][y]=='.') ans++;
        else{
            break;
        }
    }

    for(int i=x+1; i<h; i++){
        if(arr[i][y]=='.') ans++;
        else{
            break;
        }
    }



cout<<ans<<endl;
return 0;


}