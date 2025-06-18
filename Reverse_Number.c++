#include <iostream>
using namespace std;
int main ()
{
    int numbers=12345;
    reverse=0;
    while (numbers)
    {
        reverse= reverse*10 + numbers%10;
        numbers= numbers/10;
    }

    cout<< "The reverse number is: " << reverse;
    return 0;
}