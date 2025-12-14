#include <bits/stdc++.h>
using namespace std;
int main (){

    string s;
    cin>> s;


    int n= s.length();
    int flag=1;


    for(int i=0; i<n-1; i++){

        if(s[i]<=s[i+1]==1){
            flag=0;

           
        }
            }
    
    
    

    if(flag==1){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;

    return 0;
}