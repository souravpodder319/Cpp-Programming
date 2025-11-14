#include <bits/stdc++.h>
using namespace std;
int main (){
    int a[8];
    for(int i=0; i<8; i++){
        cin>>a[i];
    }

    int tag=1;
for (int j=0; j<8; j++){
    if(a[j]<100 || a[j]>675){
        
        tag=0;
        break;
    }


    for(int k=0; k<8; k++){
        if(a[k]%25!=0){
            tag=0;
            break;
        }
    }

    for(int l=0; l<7; l++){
        if(a[l]>a[l+1]){
            tag = 0;
            break;
        }
        
    }
    if(tag==1){
            cout<<"Yes"<<endl;
        }
}

    return 0;


}