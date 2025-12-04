#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>> arr[i];
        }

        int ans=0;
        
        for(int i=0; i<n; i++){
            arr[i]= arr[i]+1;
            int m=1;

            for(int i=0; i<n; i++){
                m*=arr[i];
            }
            if(m>ans){
                ans =m;

            }
           arr[i] = arr[i]-1;
        }
        cout<<ans<<endl;

    }
}