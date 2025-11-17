#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }

    int ans= a[0];
    for(int i=0; i<n-1; i++){
        if(a[i] < a[i+1]){
            ans= a[i+1];
           
        }
        else{
            break;
        }

    }
    cout<<ans<<endl;
    
    return 0;
}