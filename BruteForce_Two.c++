#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    while(n--){
        int a,b;
        cin>>a>>b;

        int T=55;
        int result;
        for(int c=a; c<=b; c++){
            result = (c-a)+ (b-c);
           
            if(result<T){
                T= result;
            }
            
        }

       cout<<result<<endl;
  
}

  return 0;
}