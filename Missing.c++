#include <bits/stdc++.h>
using namespace std;
 int pr[200001];
int main (){
   
    int n,x; 
    cin>>n;

    for(int i=1; i<n; i++){
        cin>> x;
        pr[x]=1;

    }
    for(int i=1; i<n+1; i++){

        if(pr[i]==0){
            cout<<i<<endl;
        }
    }
    return 0;
}