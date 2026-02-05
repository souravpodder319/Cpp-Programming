#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    string tar;
    tar = "abc" ;
    while(n--){
        string s;
        cin>>s;
        
        int flag =0;
    for(int i=0; i<3; i++){
        if(s[i]==tar[i]){
           
        flag=1;

     }
    }

          if(flag==1){
            cout<<"Yes"<<endl;
            
          }
          else
            cout<<"No"<<endl;  

        }
  return 0;

}