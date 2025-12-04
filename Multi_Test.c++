#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    while (n--){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0; i<a; i++){
            cin>> arr[i];
        }
        int cnt=0;
        for(int i=0; i<a; i++){

            if(arr[i]%2!=0){
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}