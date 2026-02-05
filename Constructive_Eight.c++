#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;

    while (T--){
       int n, k;
       cin>>n>>k;

       for(int i=n-k; i>=1; i--){
        cout<< i<<" ";
       }
        for(int i=n-k+1; i<=n; i++){
        cout<< i<<" ";
       }
       

       cout<<endl; 
    }
      return 0;
}