#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,d;
    cin>>n>>d;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int s=-1;

    for(int j=0; j<n-1; j++){
      int x= a[j], y= a[j+1];

      if(y-x<=d){
        s=y;
        break;
      }
       }  
    cout<<s<<endl;

    return 0;
       
    }
   