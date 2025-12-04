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
    for(int j=0; j<n-1; j++){
        if(a[j] < a[j+1]){
            ans= a[j+1];
           
        }
        else{
            break;
        }

    }
    cout<<ans<<endl;
    
    return 0;
}