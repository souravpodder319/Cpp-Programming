#include <iostream>
using namespace std;
int main ()
    {
        int n, sum=0;
        cout<< "Enter Student Number: ";
        cin>> n;

        int students [n];
        for (int i=0; i<n; i++)
        {
            cout<< "Marks for Students "<< i+1<<" :  ";
            cin >> students[i];
            sum += students[i];
        }

        cout<< "The sum of Student number : "<<sum <<endl;

        float avg = (float) sum/n;

        cout<< "The avarage value is: "<< avg <<endl;

        int max = students[0];
        int min = students[0];
        
     for (int i=1; i<n; i++)
        {
            if(max<students[i])
            {
                max=students[i];
            }

            if(min>students[i])
            {
                min=students[i];
            }
             cout<<"The max number is:"<<max<<endl;
             cout<<"The min number is:"<<min<<endl;


            

        }
        return 0;
        

    }