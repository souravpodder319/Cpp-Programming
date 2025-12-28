#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;

    while (T--){

        char arr[3][3];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
            }

               
        }
        int ca=0, cb=0, cc=0;
        for(int i=0; i<3; i++){ 
            for(int j=0; j<3; j++){
                if(arr[i][j]=='A') ca++;
                else if(arr[i][j]=='B') cb++;
                else if(arr[i][j]=='C') cc++; 
            }

    }

    if(ca==2) cout<<'A' <<endl;
    else if (cb==2) cout<<'B'<<endl;
    else if (cc==2) cout<<'C'<<endl;
    
   
    }
     return 0;
}