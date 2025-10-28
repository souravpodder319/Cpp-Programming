#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin>>a;

    if(a<3){
        cout<<"GOLD"<<endl;
    }
    else if(a>=3 && a<6 ){
        cout<<"SILVER"<<endl;

    }

   else{
    cout<< "BRONZE"<<endl;
   }
   return 0;
    
}