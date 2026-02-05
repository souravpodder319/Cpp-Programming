#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while (T--){
        int n;
        cin>>n;
        int s;
        for(int i=0; i<n; i++){
            cin>>s;

           cout<<n+1-s<<" ";
        }
        cout<<endl;
    }
    return 0;
}