#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> grafo;
vector<int> visitados;
int total;

void dfs(int u){
	visitados[u] = 1;
	
	total++;
	
	for(auto v : grafo[u])
		if(!vis[v])
			dfs(v);
}

int main(){
	
	int n, d;
	
	cin >> n >> d;
	
	int x[n], y[n];
	
	for(int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	
	grafo.assign(n, vector<int>());
	
	return 0;
}