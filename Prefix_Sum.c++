#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
       
    }
  cout<< arr[0]<<" ";
   
    int s;
      for(int i=0; i<n-1; i++){
        
        s= arr[i+1]-arr[i];
      
        cout<<s<<endl;
    }
    

    return 0;

}