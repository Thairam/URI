#include <bits/stdc++.h>
#define pow(a) ((a)*(a))

using namespace std;



int main(){
	
	int l, a, p, r;
	
	cin >> l >> a >> p >> r;
	
	bool ok = pow(l) + pow(a) + pow(p) <= 4 * pow(r);
	
	cout << (ok ? "S" : "N") << endl;
	
	return 0;
}