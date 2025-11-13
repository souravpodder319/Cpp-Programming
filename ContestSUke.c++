#include <bits/stdc++.h>
using namespace std;
int main (){
    int m,n;
    cin>>m>>n;

    int a[m], b[n];

    for(int i=0; i<m; i++){
        cin>>a[i];
    }

    for(int j=0; j<n; j++){
        cin>>b[j];
    }

    int sum=0;

    for(int k=0; k<n; k++){

        int ind = b[k]-1;
        sum+=a[ind];
    }
    cout<<sum<<endl;
    return 0;
}