#include <bits/stdc++.h>
using namespace std;

int main (){
    long long a; 
    int b;      
    cin >> a >> b;

    long long arr[b][b];

    for(int i = 0; i < b; i++){
        for(int j = 0; j < b; j++){
            cin >> arr[i][j];
        }
    }

    for(int j = 0; j < b; j++){
        int flag = 0;
        for(int i = 0; i < b; i++){
            if(arr[i][j] == a){
                flag = 1;
                break; 
            }
        }

        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
