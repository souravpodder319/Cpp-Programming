#include<bits/stdc++.h>
using namespace std;
int main (){

    int T;
    cin>>T;
    while (T--){
        int n;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int m=1,b[n*2];

        b[0]=a[0];

        for(int i=1,j=1; i<n; i++,j++){
            if(a[i]<a[i-1]){
                b[j]=a[i];
                j++;
                m++;
            }

            b[j]=a[i];
            m++;
        }

        cout<<m<<endl;
        for(int i=0; i<m; i++){
            cout<< b[i]<<" ";
        }
        cout<<endl;

    }
    return 0;

}