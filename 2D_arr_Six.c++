#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>>a;
    cin>>b;

    int arr[b][b];

    for(int i=0; i<b; i++){
        for(int j=0; j<b; j++){
            cin>> arr[i][j];

        }
    }


    for(int j=0; j<b; j++){
        int flag=0;
        for(int i=0; i<b; i++){
            if(arr[i][j]==a){
                 flag=1;
            }
        }

        if(flag==1){
            cout<<"Yes"<<endl;

        }
        else{
            cout<<"No"<<endl;
        }
         
    }


    return 0;

}