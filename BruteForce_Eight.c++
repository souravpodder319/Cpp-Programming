#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin >> T;

    while (T--){

        int n;
        cin>> n;

        bool isfind =false;

        for(char i='a'; i<='z'; i++){
            
            for(char j='a'; j<='z'; j++){

           for(char k='a'; k<='z'; k++){

            int ip = i- 'a'+1;
            int jp= j-'a'+1;
            int kp= k -'a'+1;

            if(ip+jp+kp==n){
                isfind =true;
                cout<<i<<j<<k<<endl;
                break;
            }
           
             }
             if(isfind) break;

         }
          if(isfind) break;
           
        }
    }
    return 0;
}