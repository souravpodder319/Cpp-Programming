#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    for (int i=0; i<n; i++){
     int a[7];
        for (int j=0; j<7; j++){
            cin>>a[j];
        }

        int sum =0;
        for (int k=0; k<7; k++){
            sum+=a[k];
        }
        cout<<sum<<endl;

    }
    return 0;
}