#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a, b;
    cin >> a >> b;
    
    long long int n;
    if(a%b==0){
        n= a/b;
    }
    else{
          n = a/b +1;
    }
  
    cout<<n;
    return 0;
    

}