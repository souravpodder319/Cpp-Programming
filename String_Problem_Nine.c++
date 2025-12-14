#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int t= s.size();

    string temp;

    for(int i=0; i<t; i++){

       if(s[i]!= 'a' and s[i]!= 'e' and s[i]!= 'i' and s[i]!= 'o' and s[i]!= 'u'){

        cout<<s[i];
       }
 
    }
    
    return 0;
}

