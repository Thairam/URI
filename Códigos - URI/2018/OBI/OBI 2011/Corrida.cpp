#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

int main(){
	
	int n, m;
	
	cin >> n >> m;
	
	ii p[n];
	for(int i = 0; i < n; i++){
		p[i] = ii(0, i);
		for(int j = 0; j < m; j++){
			int x;
			cin >> x;
			p[i].first+= x;
		}
	}
	
	sort(p, p + n);
	
	for(int i = 0; i < 3; i++){
		cout << p[i].second + 1 << endl;
	}
	return 0;
}