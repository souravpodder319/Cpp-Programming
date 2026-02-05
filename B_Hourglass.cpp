#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while (T--){
        long long s, k, m;
        cin>>s>>k>>m;

        if(s<=k){
            cout<<max(0ll,s-m%k)<<endl;
        }

        else{
            long long kotbar = (m/k);
            if(kotbar%2==1){
                cout<<k-m%k<<endl;
            }
            else{
                cout<<s-m%k<<endl;
            }
        }
    }
    return 0;
}