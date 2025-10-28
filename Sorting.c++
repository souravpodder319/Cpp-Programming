#include <bits/stdc++.h>
using namespace std;
int main (){
    int a, b, c;

    cin>> a>> b>> c;

     if (a<b && a<c) //a is smallest
     {
        if( b<c)
        cout<< a<<" "<<b<<" "<<c<<endl;
        else{
            cout<< a<<" "<<c<<" "<<b<<endl;
        }
     }

     else if ( b<a && b<c) //b is the smallest
     {
        if (a<c){
        cout<< b<<" "<<a<<" "<<c<<endl;
    }
        else{
            cout<< b<<" "<<c<<" "<<a<<endl;
        }
     }

     else {         //c is smallest
        if (a<b){
            cout<< c<<" "<<a<<" "<<b<<endl;
        }
        
          else {
        cout<< c<<" "<<b<<" "<<a<<endl;
     }
     
     }
   

    
    return 0;

}