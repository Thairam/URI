#include <bits/stdc++.h>
#include <list>
#include <queue>
#define INF 10000000
#define lii list<pair<int, int> >
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define vii vector<pair<int, int>

using namespace std;

class Grafo{

private:
	int V;
	lii * adj;
	
public:
	Grafo(int V){
		this->V = V;
		adj = new lii[V];
	}
	
	void addAresta(int v1, int v2, int custo){
		adj[v1].pb(mp(v2, custo));
	}
	
	int * dijkstra(int orig, int dest){
		int dist[V];
		bool visitados[V];
		priority_queue< pi, vii >, greater<pi > > fila;
		
		memset(dist, 1, sizeof dist);
		memset(visitados, false, sizeof visitados);
		
		dist[orig] = 0;
		fila.push(mp(dist[orig], orig));
		
		while(!fila.empty()){
			pi p = fila.top();
			int u =  p.second;
			fila.pop();
			
			if(!visitados[u]){
				visitados[u] = true;
				
				for(lii::iterator it = adj[u].begin(); it != adj[u].end(); it++){
					int v = it->first;
					int custo_aresta = it->second;
					
					if(dist[v] > dist[u] + custo_aresta){
						dist[v] = dist[u] + custo_aresta;
						fila.push(mp(dist[v], v));
					}
				}
			}
		}
		return dist[dest];
	}
};


int main(){
	
	int n, m;
	while(scanf("%d %d", &n, &m) != EOF){
		Grafo A(n);
		Grafo B(n);
		
		int a, b, t, r;
		for(int i = 0; i < m; i++){
			scanf("%d %d %d %d", &a, &b, &t, &r);
			if(t == 0){
				B.addAresta(a - 1, b - 1, r);
			}
			else
				A.addAresta(a - 1, b - 1, r);
		}
		
		int x = 0, y = 0;
		x = A.dijkstra(0, n - 1);
		y = B.dijkstra(0, n - 1);
		
		cout << min(x, y) << endl;
		
	}
	
	return 0;
}