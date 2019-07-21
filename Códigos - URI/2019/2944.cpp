#include <bits/stdc++.h>

using namespace std;

class Grafo{
	int n;
	list<int> *adj;

	bool dfs(int node, bool * visited, bool * alcancados){
		if(alcancados[node]) return false;			
		if(visited[node]) return true;
	
		visited[node] = true;
		bool not_alc = true;   	
			
		for(list<int>::iterator it = this->adj[node].begin(); it != this->adj[node].end(); it++){
			not_alc = dfs(*it, visited, alcancados) && not_alc;
		}
		alcancados[node] = true;
		return not_alc;
	}
	
public:
	Grafo(int n){
		this->n = n + 1;
		this->adj = new list<int>[this->n];   	
	}

	void cria_adjacencia(int a, int b){
		this->adj[a].push_back(b);
	}	
	
	void verifica(int v, int sede, int & cont){
		bool *visited = new bool[n];
		bool *alcancados = new bool[n];
		memset(visited, 0, n * sizeof (bool));
		memset(alcancados, 0, n * sizeof (bool));

		dfs(sede, visited, alcancados);
						
		for(int i = 1; i <= v; i++){
			if(!visited[i]){
				if(dfs(i, visited, alcancados))
					cont++;				
			}
		}
	}
};


int main(){
	
	int v, e, s;
	int x, y;

	cin >> v >> e >> s;
	
	Grafo g(v);
	bool *adjacente = new bool[v+1];
	memset(adjacente, 0, (v+1) * sizeof (bool));
	adjacente[s] = true;
	
	for(int i = 1; i <= e; i++){
		cin >> x >> y;
		g.cria_adjacencia(x, y);
		adjacente[y] = true;
	}
	
	int cont = 0;
	for(int i = 1; i <= v; i++){
		if(!adjacente[i]){
			g.cria_adjacencia(s, i);
			adjacente[i] = true;
			cont++;
		}
	}	
	
	g.verifica(v,s,cont);
	cout << cont << endl;
								
	return 0;
}