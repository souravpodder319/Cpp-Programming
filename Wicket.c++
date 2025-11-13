#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
    
    char a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    
    if(a=='W' && b=='W' && c=='W'){
        cout<<"Yes"<<endl;
    }
    
     else if(b=='W' && c=='W' && d=='W'){
        cout<<"Yes"<<endl;
    }
    
     else if(c=='W' && d=='W' && e=='W'){
        cout<<"Yes"<<endl;
    }
    
     else if(d=='W' && e=='W' && f=='W'){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    }
    
    return 0;

}
