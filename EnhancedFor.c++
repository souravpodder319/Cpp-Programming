#include <iostream>
using namespace std;
int main ()
    {
        int arr[]={10,20,30,40};

        for ( int i: arr)
        {
            cout<< "The value :" << i<<endl;

        }
        return 0;
    }