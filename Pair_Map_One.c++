#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    map <int,int>mp;
    for(int i=0; i<n; i++){
        int num; cin>>num;
        mp[num]++;
    }

    for (auto [num,cnt]:mp){
        cout<<num<<' '<<cnt<<endl; //hello world
    }
}