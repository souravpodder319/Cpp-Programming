#include <bits/stdc++.h>
using namespace std;
 int main (){
    int T;
    cin>>T;
    while (T--){
        int n,m,k;
        cin>>n>>m>>k;

        int left[n], right[m];

        for(int i=0; i<n; i++) cin>>left[i];
        for(int j=0; j<m; j++) cin>>right[j];

        int ans =0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(left[i]+right[j]<=k) ans++;
            }
        }
        cout<< ans<<endl;

    }
    return 0;
 }