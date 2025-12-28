#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while (T--){
        
        int n,s=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            
            s += abs(arr[i]-arr[i+1]);

        }
        
    }
    return 0;
}
