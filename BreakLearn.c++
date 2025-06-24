#include <iostream>
using namespace std;
int main (){

    for (int i=0; i<6 ; i++)
    {
        if (i==4){
            //break;
            continue;
        }
        cout << i << endl;
    }
    return 0;
}