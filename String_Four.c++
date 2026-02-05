#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    int cnt[26]={0};

    for(auto x:s){
        if(x!=' '){
            x = tolower(x);
            cnt[x-'a']++;
        }
    }

    int mn = *min_element(cnt, cnt+26);
    if (mn==0) cout<<"not pangram\n";
    else cout<<"pangram\n";
}