#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter your number:";
    cin>> n;

    int sum = 0;

    for (int i=0; i<n-1; i++)
    {
        int number;
        cin>> number;

        sum += number;
    }

    int total = n*(n+1)/2;
    int missing = total-sum;

    cout<<"The missing value is: "<< missing;


}