#include <bits/stdc++.h>
#include <list>

using namespace std;

class Grafo{
	int n; // quantidade de nós do grafo
	list<int> *adj; // Lista de adjacências para cada nó do grafo

	void dfs(int node, bool * visited, int & cont){
		if(visited[node]) return;
		
		visited[node] = true;
		cont++;
	
		list<int>::iterator it;
	
		for(it = this->adj[node].begin(); it != this->adj[node].end(); it++){
			dfs(*it, visited, cont);
		}
	}
	
// Todos os métodos abaixo serão públicos	
public:
	Grafo(int n){
		this->n = n + 1;
		this->adj = new list<int>[this->n];   	
	}

	void cria_adjacencia(int a, int b){
		this->adj[a].push_back(b);
	}	
	
	// Retornar quantos pokemnos são do mesmo tipo do meu pokemon
	int count(int no){
		bool *visited = new bool[n];
		memset(visited, 0, n * sizeof (bool));
		
		int cont = 0;
		
		dfs(no, visited, cont);
		
		return cont;
	}
	
};

int main(){
	
	int n, m;
	int a, b;	
	int x;

	while(cin >> n >> m){
	
		Grafo g(n);
		
		for(int i = 0; i < m; i++){
			cin >> a >> b;
			g.cria_adjacencia(a, b);
		}
		
		cin >> x;
		
		cout << g.count(x) << endl;
		
	}
	
	return 0;
}