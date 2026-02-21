#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    map <string, int>cnt;
    string name;

  
    for(int i=0; i<n; i++){
        cin>>name;
        if(cnt[name]==0){
            cout<<"OK"<<endl;
            cnt[name]=1;
        }
        else{
            cout<<name<<cnt[name]<<endl;
            cnt[name]++;
        }
    }
}