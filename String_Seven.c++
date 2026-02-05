#include <bits/stdc++.h>
using namespace std;

int call (){
    string s;
    getline(cin,s);
    int cnt =0;
    for(auto x:s){
        if(x=='a'|| x=='e'||x=='i'||x=='o'||x=='u'){
        cnt++;
        }

    }
    return cnt;
}
int main (){
    int a1 = call();
     int a2 = call();
      int a3 = call();

      if(a1==5 && a2==7 && a3==5 ){
        cout<<"Yes\n";
      }
      else cout<<"No\n";
}