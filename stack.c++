#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;

    int a[m];
    for(int i=0; i<m; i++){
        cin>>a[i];
    }

    int ind= m-n;
    for(int j=ind; j<m; j++){
        cout<<a[j]<<endl;
    }

    for(int k=0; k<ind; k++){
        cout<<a[k]<<endl;
    }
    return 0;

}