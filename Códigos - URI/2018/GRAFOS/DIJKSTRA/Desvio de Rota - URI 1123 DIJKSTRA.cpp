#include <bits/stdc++.h>
#include <list>
#define lii list<pair<int, int> >
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define vii vector<pair<int, int>

using namespace std;

class Grafo{

	int n;
	lii * adj;
	
public:
	Grafo(int n){
		this->n = n;
		this->adj = new lii[n];
	}
	
	void add_Aresta1(int a, int b, int c){
		adj[a].pb(mp(b, c));
	}
	void add_Aresta2(int a, int b, int c){
		adj[b].pb(mp(a, c));
	}		
	
	int dijkstra(int orig, int dest){
		int dist[n];
		bool visited[n];
		priority_queue< pi, vii >, greater<pi > > fila;
		
		memset(dist, 1, sizeof dist);
		memset(visited, false, sizeof visited);
		
		dist[orig] = 0;
		fila.push(mp(dist[orig], orig));
		
		while(!fila.empty()){
			pi p = fila.top();
			int u = p.second;
			fila.pop();
			
			if(!visited[u]){
				visited[u] = true;
				
				for(lii::iterator it = adj[u].begin(); it != adj[u].end(); it++){
					dist[it->first] = min(dist[it->first], dist[u] + it->second);
					fila.push(mp(dist[it->first], it->first));
				}
			}
		}
		return dist[dest];
	}
};

int main(){
	
	int n, m, c, k;
	while(scanf("%d %d %d %d", &n, &m, &c, &k) && n+m+c+k){
		Grafo g(n);
		
		int u, v, p;
		for(int i = 0; i < m; i++){
			scanf("%d %d %d", &u, &v, &p);
			if(u >= c && v >= c){
				g.add_Aresta1(u, v, p);
				g.add_Aresta2(u, v, p);
			}
			if(u >= c && v < c)
				g.add_Aresta1(u, v, p);
			if(u < c && v >= c)
				g.add_Aresta2(u, v, p);
			if(u < c && v < c && abs(u - v) == 1){
				g.add_Aresta1(u, v, p);
				g.add_Aresta2(u, v, p);
			}	
		}
		
		cout << g.dijkstra(k, c - 1) << endl;
	}
	
	return 0;
}
