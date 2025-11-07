#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    for (int i=0; i<n; i++){
        int s;
        cin>>s;
        if(s%3 ==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}