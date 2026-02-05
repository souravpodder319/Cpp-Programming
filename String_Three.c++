#include <bits/stdc++.h>
using namespace std;

int cmpstring(string x, string y){
    int n= x.size();

    for(int i=0; i<n; i++){
        x[i]=tolower(x[i]);
        y[i]= tolower(y[i]);
    }

    if(x==y) return 0;
    else if(x<y)return -1;
    else return 1;

}


int main (){


 string a,b;
    cin>>a>>b;

    cout<<cmpstring(a,b);
    return 0;

   

   
}