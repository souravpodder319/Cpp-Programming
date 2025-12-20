#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while (T--){

        int n;
        cin>>n;
        string arr[n];
        for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    string rslt =arr[0];

    for(int i=1; i<n; i++){
       
        string adfrnt = arr[i]+rslt;
        string adbck = rslt+ arr[i];

        if(adfrnt<adbck){
            rslt =adfrnt;
        }
        else rslt = adbck;
    }  
    cout<<rslt<<endl;
   
}
 return 0;
}
