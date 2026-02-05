#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<n-1; i++){
        if(s[i]=='n'&& s[i+1]=='a'){
            s.insert(i+1,"y");
            n++;
        }
    }
    cout<<s<<endl;
}