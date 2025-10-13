#include <bits/stdc++.h>

using namespace std;
int main ()
{
    double n, area, cir;

    cin>>n;

    area = M_PI * n*n;

    cir = 2 * M_PI * n;
    
    cout <<fixed <<setprecision(6);


    cout<<area<<' '<<cir  <<endl;

    return 0;




}