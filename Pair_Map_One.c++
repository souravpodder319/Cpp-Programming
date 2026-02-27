#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    map <int,int>mp;
while (n--){
 int num; cin>>num;
        mp[num]++;
}
       
    

    for (auto [num,cnt]:mp){
        cout<<num<<' '<<cnt<<endl;
    }
}