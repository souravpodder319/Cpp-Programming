#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
       int cnt=0;
        for(int i=1; i<=9; i++){
          
           int m=i;
           while(m<=n) {
            cnt++;
            m= m *10;
              
           }
        
      
        }
        cout<<cnt<<endl;
    
    }
return 0;
}