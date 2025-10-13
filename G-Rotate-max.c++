#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    int a,b,c;

    a = n/100;
    b = n/10%10;
    c = n%10;

  int ans, r1,r2,r3;
  r1 = a*100 + b*10 + c;
  r2 = b*100 + c*10 + a;
  r3 = c*100 + a*10 + b;

  ans = r1+r2+r3;

  cout<<ans<<endl;

    return 0;

}