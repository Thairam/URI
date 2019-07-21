#include <bits/stdc++.h>
#include <list>
#define ii pair<int, int>
#define lii list<ii >
#define mp make_pair
#define pb push_back
#define MAX 10010

using namespace std;

class Grafo{
	int n;
	lii *adj;
	int *debitos;
	
	int dfs(int node, bool * visited, int cap, int &custo){
		if(visited[node]) return 0;
		
		visited[node] = true;
	
	   	int cofre = 0;
	   	
	   	for(lii::iterator it = adj[node].begin(); it != adj[node].end(); it++){
			int imp = dfs(it->first, visited, cap, custo);
			
			custo+= 2 * (imp / cap) * it->second;
			
			if(imp%cap > 0) custo+= 2 * it->second;
			
			cofre+= imp;    
		}
		
		return cofre + debitos[node];
	}
		
public:
	Grafo(int n, int *debitos){
		this->n = n;
		this->adj = new lii[n + 1];
		this->debitos = debitos;   	
	}

	void cria_adjacencia(int a, int b, int custo){
		this->adj[a].pb(mp(b, custo));
		this->adj[b].pb(mp(a, custo));
	}
	
	int calcula(int cap){
		bool visited[MAX];
		
		int custo = 0;
		
		dfs(1, visited, cap, custo);
		
		return custo;
	}	
};


int main(){
	
	int n, cap;
	int debitos[MAX];
	
	cin >> n >> cap;
	
	Grafo g(n, debitos);
	
	for(int i = 1; i <= n; i++){
		cin >> debitos[i];
	}
	
	int a, b, custo;
	for(int i = 1; i < n; i++){
		cin >> a >> b >> custo;
		g.cria_adjacencia(a, b, custo);
	}
	
	cout << g.calcula(cap) << endl;
	
	return 0;
}