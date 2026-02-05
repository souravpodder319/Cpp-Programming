#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while (T--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        for(int i=0; i<n; i++){
            s[i]=tolower(s[i]);
        }
        string new_s;
        new_s+=s[0];
        for(int i=1; i<n; i++){
        if (s[i] != s[i - 1]) {
            new_s += s[i];
            }
        }

        if(new_s == "meow") cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}