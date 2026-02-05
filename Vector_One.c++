#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int x,y,z;
    vector <vector <int>>ans;

    for(x=0; x<=n; x++){
        for(y=0; y<=n; y++){
            for(z=0; z<=n; z++){

                if(x+y+z<=n){
                    ans.push_back({x,y,z});
                }
            }
        }
    }

    sort(ans.begin(), ans.end ());
    int m= ans.size();
    for(int i=0; i<m; i++){
        cout<<ans[i][0]<<" "<<ans [i][1]<<" "<<ans[i][2]<<endl;
    }


}