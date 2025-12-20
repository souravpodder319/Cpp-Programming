#include <bits/stdc++.h>
using namespace std;
int main (){

    int T;
    cin>>T;
    while (T--){
        int l, a, b;
        cin>>l>>a>>b;

        int mx =a;

        for(int i=0; i<l; i++){
            a = (a+b)%l;
            mx= max (mx,a);
        }
        cout<<mx<<endl;
    }
    return 0;
}