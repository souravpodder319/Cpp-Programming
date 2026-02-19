#include <bits/stdc++.h>
using namespace std;
int main (){

    int n,m;
    cin>>n>>m;
    map <string, string> nameofIP;
    string name, ip;
    for(int i=0; i<n; i++){
        cin>>name>>ip;
        nameofIP[ip] = name;
}

string command;
for(int i=0; i<m; i++){
    cin>>command>>ip;
    string nIP =ip;
    nIP.pop_back();
    cout<<command<<" "<<ip<<" #"<<nameofIP[nIP]<<endl;
}
return 0;
}
