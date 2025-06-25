#include <iostream>
using namespace std;
int main()
{
    int roll[5];
    cout <<"Enter Roll: ";

    for(int i =0; i<5; i++)
    {
        cin>> roll[i];
    }

    for(int j= 0; j<5; j++)
    {
        cout << "The Roll is: "<< roll[j] <<endl;
    }
    return 0;
}