#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k,m;
    cin>>n>>k>>m;

    int s=0;
    for(int i =0; i<n-1; i++){
        int a;
        cin>> a;
        s+=a;
        

    }
    
    int rem= n*m -s;
    if(rem<0){
   cout<<"0"<<endl;
    
}

else if(rem>k){
    cout<<"-1"<<endl;
}

else{
    cout<<rem<<endl;
}
return 0;

}