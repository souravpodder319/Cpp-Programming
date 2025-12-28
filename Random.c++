#include <bits/stdc++.h> 
using namespace std; 
int main (){ 
    
    long long a,b,c,d; 
    long long mal=1; 
    cin>>a>>b>>c>>d; 
    
    mal = (mal * a)%100; 
    mal = (mal * b)%100; 
    mal = (mal * c)%100; 
    mal = (mal * d)%100; 

    if(mal<10){ 
        
    cout<<0<<mal<<endl; 
        
    } 

    else cout<<mal<<endl; 

    return 0;  

} 
