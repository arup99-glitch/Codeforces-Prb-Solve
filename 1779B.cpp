#include <bits/stdc++.h>

using namespace std;


int main() {
  int t, n;
  for (cin >> t; t--;) {
    cin >> n;
    if (n == 3) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
      for (int i = 0; i < n/2; ++i)
        cout << n/2-n%2 << ' ' << -n/2 << ' ';
      if (n%2) cout << n/2-n%2;
      cout << endl;
    }
  }
}
