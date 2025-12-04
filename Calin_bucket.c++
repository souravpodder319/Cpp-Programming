#include <bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int t;
        cin>>t;

        int arr[t];
       long long sum=0;
        for(int j=0; j<t; j++){
            cin>>arr[j];

            sum+=arr[j];
        }
            
        long long g= sqrt(sum);

        if(g*g==sum)

        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}