#include <bits/stdc++.h>
using namespace std;
int main (){
    int m,n;
    cin>>m>>n;
 int p,s;
  s=0;
    for (int i=0; i<m; i++){
       
        cin>>p;

        if(p<=n){
            s =s+p;
        }        
    }
    cout<< s<<endl;
      return 0;

    }