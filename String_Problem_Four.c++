#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;

        string tar = "abc";
        int cor =0;

        int t= s.size();

        for(int i=0; i<t; i++){

            if(s[i]==tar[i])
            cor++;
        }
        if(cor>=1){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

   
    

return 0;
}