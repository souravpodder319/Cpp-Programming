#include <iostream>
#include <iomanip>
using namespace std;
 int main ()
 {
    int a, b, d, r;
    double f;
    cin>> a>>b;
    d = a/b;
    r = a%b;
    f = a/double(b);

    cout<< d<<' '<< r << ' '<<fixed <<setprecision(5)<< f<<endl ;
     return 0;

 }