#include <bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s = "";
    while (n--) {
      string a;
      cin >> a;
      s = min(s + a, a + s);
    }
    cout << s << '\n';
  }
  return 0;
}