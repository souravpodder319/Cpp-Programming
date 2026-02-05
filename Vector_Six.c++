#include <bits/stdc++.h>
using namespace std;
int main (){
    int q;
    cin>>q;
    vector<int> a;
    while (q--){
        int t;
        cin>>t;
        if(t==0){
            int x;
            cin>>x;
            a.push_back(x);
        }

        else if(t==1){
            int p;
            cin>>p;
            cout<<a[p]<<endl;
        }
        else{
            a.pop_back();
        }
    }
}