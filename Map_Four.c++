#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    vector<int>arr(n+1);
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    long long ans =0;
    long long sum =0;

    map <int,int>cnt;
    for(int i=0; i<=n; i++){
        for(int p =0; p<30; p++){
            sum = (1<<p);
            int need = sum-arr[i];
            ans += cnt[need];

        }
        cnt [arr[i]]++;

    }
    cout<<ans<<endl;

}