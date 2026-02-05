#include <bits/stdc++.h>
using namespace std;
int main (){

    int T;
    cin>>T;

    while (T--){
        string n;
        cin>>n;
        
        int cnt[26]={0};

        for(int i=0; i<n.length(); i++){
            cnt[n[i] - 'a']++;
        }
        
        for(int i=0; i<26; i++){
            if(cnt[i]==2){
                cout<<char ('a'+i)<<char ('a'+i);
            }
        }


        for(int i=0; i<26; i++){
            if(cnt[i]==1){
                cout<<char('a'+i);
            }
        }

        cout<<endl; 

    }
    

    return 0;

}