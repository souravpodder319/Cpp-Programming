#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    
    int digit[3];

    digit[0] = n/100;
    digit[1] = (n/10)%10;
    digit [2] = n%10;

    int sum =0;

    for(int i=0; i<3; ++i)
    {
        int rotate= digit[i%3]*100 + digit[(i+1)%3]*10 + digit[(i+2)%3];
        sum = sum + rotate;
    }
    cout <<sum<< endl;
    return 0;
}
