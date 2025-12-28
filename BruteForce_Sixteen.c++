#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while (T--){
        int n;
        cin>>n;
        int pos=0;
        for(int time=1; time<=n; time++){
            if(time%2==0) pos--;
            else pos+=3;
        }

        cout<<pos<<endl;
    }
    return 0;
}