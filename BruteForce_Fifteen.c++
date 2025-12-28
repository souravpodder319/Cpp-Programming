#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while (T--){

        int n;
        int cnt=0,nnt=0;
        for(int i=0; i<7; i++){
           cin>>n; 

           if(n==1){
            cnt++;
           }
           if(n==0){
            nnt++;
           }
        }

        if(cnt>nnt){
            cout<<"Yes"<<endl;
                }
                else cout<<"No"<<endl;

    }
    return 0;
}