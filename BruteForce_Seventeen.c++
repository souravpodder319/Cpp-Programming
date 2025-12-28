#include <bits/stdc++.h>
using namespace std;
int main (){
int T;
cin>>T;
int n;
while (T--){
        
    cin>>n;
    int s;

        
        s=n%4;
        if(s==0) cout<<"North"<<endl;
        else if(s==1) cout<<"East"<<endl;
        else if(s==2) cout<<"South"<<endl;
        else if(s==3) cout<<"West"<<endl;
    }

    return 0; 
}
