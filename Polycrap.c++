#include <bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        
     
    
    int k;
    cin>> k;
    int count=1;
    
    for (int j = 0 ; ;j++){
        
        
       if (j%10==3 || j%3==0){
        continue;
       }

       else if (k == count){
        cout<<j<<endl;
        break;
       }
       count ++;
    }

}
return 0;


}