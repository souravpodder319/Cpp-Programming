#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

   
    if ((abs(s[0] - s[1]) == 1 || abs(s[0] - s[1]) == 4) == (abs(t[0] - t[1]) == 1 || abs(t[0] - t[1]) == 4)){
         cout << "Yes";
    }
       
    else{
        cout << "No";
    }
        
        return 0;
}
