#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,ans;
    cin>> n;
    int arr[4*n-1];
    for(int i=0; i<4*n-1; i++){
        cin>>arr[i];
    }

    int F[n+1];
    for (int i =1; i<=n; i++){
        F[i]=0;
    }

    for (int i=0; i<4*n-1; i++){
        F[arr[i]]++;

    }
    
    for(int i=1; i<=n; i++){
        if (F[i]==3){
            ans =i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}