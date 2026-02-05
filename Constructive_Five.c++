#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while (T--){
        int m;
        cin>> m;

        int k=1;
        int temp = m;
        temp/=10;
        while (temp!=0){
            temp/=10;
            k*=10;
        }
        cout<<m-k<<endl;
    }
    return 0;
}