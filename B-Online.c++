#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    double t;
    cin>>a;
    int b[a], c[a];

    for (int i=0; i<a; i++){
        cin>> b[i]>> c[i];

        t = b[i] - (b[i]*10/100);

       
        if (t<c[i]){
            cout<<"ONLINE"<<endl;

        }

        else if (t==c[i]){
            cout<<"EITHER"<<endl;
        }

        else{
            cout<<"DINING"<<endl;
        }

    }

    return 0;
}