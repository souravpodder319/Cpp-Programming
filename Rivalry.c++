#include <bits/stdc++.h>
using namespace std;
int main (){
    int r1, r2,d1,d2,dom,eve;
    cin>> r1>>r2;
    cin>> d1>>d2;

    dom = r1+(d1);

    eve= r2+(d2);

    if ( dom>eve){
        cout<<"Dominater";
    }
    else{
        cout<<"Everule";
    }

    return 0;



}