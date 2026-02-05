#include <bits/stdc++.h>
using namespace std;

long long calculate (long long n){
    if(n%2==0)
    return n/2;

    else
    return -(n+1)/2;
}

int main (){
    long long n;
    cin>>n;
    cout<<calculate(n);
    return 0;
}