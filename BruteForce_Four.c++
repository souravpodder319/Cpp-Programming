#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    while (n--){
        int a,b;

        cin>> a>>b;
        int count=0;
        for(int i=a; i<=b; i++){

            if(i%10==2|| i%10==3 || i%10==9){
              count++;  
            }
    }

    cout<<count<<endl;
   
}
 return 0;
}