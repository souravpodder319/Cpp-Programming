#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;

    while(t--){
        int n,value;
        cin>> n;
       int s=0;
       
        for(int index=1; index<=n; index++){
            cin>>value;

            if(value<=index) s=1;
            
        }

        if(s==1){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;

        
    }
    return 0;
}