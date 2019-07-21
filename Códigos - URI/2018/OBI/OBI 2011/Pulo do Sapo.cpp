#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main(){
	
	int n, m;
	cin >> n >> m;
	
	int v[n + 1];
	int vis[n + 1];
	memset(v, 0, sizeof v);
	int p, d;
	
	for(int i = 1; i <= m; i++){
		cin >> p >> d;
		memset(vis, 0, sizeof vis);
		
		queue<int> q;
		q.push(p);
		
		while(!q.empty()){
			int u = q.front(); q.pop();
			
			if(u < 1 || u > n)
				continue;
			if(vis[u])
				continue;
			vis[u] = 1;
			v[u] |= 1;
			q.push(u + d);
			q.push(u - d);
			
		}
	}
	
	for(int i = 1; i <= n; i++){
		cout << v[i] << endl;
	}
	
	return 0;
}