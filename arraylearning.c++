#include <iostream>
using namespace std;
int main ()
{
    int roll [5];
     cout<<"Enter Roll: ";
    for(int i=0; i<5; i++)
    {
       
        cin>> roll [i];
    }
     for (int i=0; i<5; i++ )
     {
        cout<<"The Roll are :"<< roll [i] <<endl;
        
     }

     return 0;
}