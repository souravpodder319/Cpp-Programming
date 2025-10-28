#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;
    int b[a];

    for (int i=1; i<=a; i++){

        cin>>b[i];
      if(b[i]<=10){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }

    return 0;

}