#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>> a>>b;

    int arr[a+1][b+1];

    for(int i=1; i<=a; i++){

        for(int j=1; j<=b; j++){
            cin>> arr[i][j];
        }
    }
     
    int r1,r2,c1,c2;
    cin>> r1>>c1>>r2>>c2;

    int sum =0;
    for(int i=r1; i<=r2; i++){

        for(int j=c1; j<=c2; j++){
            sum+=arr[i][j];
            
        } 
         
    }

    cout<<sum<<endl;


    return 0;

}