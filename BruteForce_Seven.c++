#include <bits/stdc++.h>
using namespace std;
int main (){

    int T;
    cin>>T;
    while (T--){

        int x, k;
        cin>> x>> k;

        for(int y=x; ; y++){
            int sum=0;
            int val=y;

            while(val>0){
                sum = sum + (val % 10); //1-->7 2-->14 3-->21
                val= val/10; //1-->77 2-->7 3-->0

            }

            if(sum% k== 0){
                cout<<y<<endl;
                break;
            }
        }


    }
    return 0;
}