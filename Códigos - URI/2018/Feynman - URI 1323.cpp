#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
  	while (cin >> n && n) {
    	long long ans = 0;
    	for (int i = 1; i <= n; ++i) {
      		long long a = n - (i - 1);
      		ans += a * a;
    	}
    	cout << ans << endl;
  }
	
	return 0;
}
