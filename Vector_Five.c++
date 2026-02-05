#include <bits/stdc++.h>
using namespace std;

int main() {
 

    int n, q;
    cin >> n >> q;

    vector<int> a[n];

    while (q--) {
        int type;
        cin >> type;

        if (type == 0) {
            int idx, x;
            cin >> idx >> x;
            a[idx].push_back(x);
        }
        else if (type == 1) {
            int idx;
            cin >> idx;

            int m = a[idx].size();
            for (int i = 0; i < m; i++) {
                if (i) cout << " ";
                cout << a[idx][i];
            }
            cout << "\n";
        }
        else { // type == 2
            int idx;
            cin >> idx;
            a[idx].clear();
        }
    }

    return 0;
}
