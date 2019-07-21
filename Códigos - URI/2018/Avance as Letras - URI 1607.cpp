#include <bits/stdc++.h>


using namespace std;

int main() {
  int n; cin >> n;
  while (n--) {
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < a.size(); ++i) {
      int diff = b[i] - a[i];
      if (diff < 0) diff += 26;
      ans += diff;
    }
    cout << ans << endl;
  }
  return 0;
}

