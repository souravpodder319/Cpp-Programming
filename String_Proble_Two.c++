#include <bits/stdc++.h>
using namespace std;

int main (){
    string first;
    cin>>first;

    int n = first.length() -1;

    first.at(n)='4';

    cout<<first<<endl;
    return 0;
}