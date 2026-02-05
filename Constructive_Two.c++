#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ok = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ok = 1;
                break;
            }
        }

        if (ok == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
