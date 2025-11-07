#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int s;
        cin>>s;

        if (s >= 1900){
            cout<<"Division 1"<<endl;
        }

        else if (s >=1600 || s >= 1899){
            cout<<"Division 2"<<endl;
        }

        else if (s>=1400 || s>=1599){
            cout<<"Division 3"<<endl;
        }

        else if (s<=1399){
            cout<<"Division 4"<<endl;
        }

    }

    return 0;
}