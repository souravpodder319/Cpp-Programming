#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    int prev=0;
    int cur;
    for(int i=1; i<=10; i++){

        if(n%i==0){
            cur=i;
        }

        if(cur>prev){
            prev=cur;
        }
    }
    cout<<cur<<endl;

    return 0;
}