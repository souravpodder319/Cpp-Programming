#include <bits/stdc++.h>
using namespace std;
int main (){
    int a, b, m, n, mess, ron;

    cin >> a >> b >> m >> n;

    mess = (a * 2) + b;
    ron = (m * 2) + n;

    if ( mess> ron){
        cout<<"Messi"<<endl;
    }
    else if(mess == ron){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Ronaldo"<<endl;
    }
    return 0;

}