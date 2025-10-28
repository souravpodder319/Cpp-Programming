#include <bits/stdc++.h>
using namespace std;
int main (){
    int a, b,t;
    cin >> a >> b;

    t= a + b +(a*b);
    if (t == 111){
        cout<<"Yes"<<endl;
    }
    else{
        cout<< "No"<<endl;
    }
    return 0;
}