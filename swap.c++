#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;

    p--;q--;r--;s--;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }

    for (int i=0; i<p; i++){
        cout<<arr[i]<<" ";

    }


    for(int i=r; i<=s; i++){
        cout<<arr[i]<<" ";

    }

    for(int i=q+1; i<r; i++){
        cout<<arr[i]<<" ";

    }

    for(int i=p; i<=q; i++){
        cout<<arr[i]<<" ";

    }

    for(int i=s+1; i<n; i++){
        cout<<arr[i]<<" ";

    }

    cout<<endl;


    return 0;
}