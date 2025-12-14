#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;

    int t= s.size();
    int flag=0;

    for(int i=1; i<t; i+=2){

        if(s[i]!='0'){
            flag=1;
            break;
        }

    } 

    if(flag==1){
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
   
   return 0;
}