#include <bits/stdc++.h>

using namespace std;

typedef long long int T;

int main(){
	
	T s, n, m;
	T c1, c2, c3;
	T area = 0;
	while(scanf("%lld %lld %lld", &s, &n, &m) && s+n+m){
		
		scanf("%lld %lld %lld", &c1, &c2, &c3);
		area = abs((c1 * (c3-c2) * s) / ((n+1)*(m+1)));
		cout << area << endl;
	}
	
	return 0;
}