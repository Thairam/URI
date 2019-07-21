#include <bits/stdc++.h>
#include <list>

using namespace std;

/*
Problema: Identificar se um grafo não direcionado é conexo ou não!
*/

class Grafo{
	int n; // quantidade de nós do grafo
	list<int> *adj; // Lista de adjacências para cada nó do grafo

	void dfs(int node, bool * visited){
		if(visited[node]) return;
		
		visited[node] = true;
	
		list<int>::iterator it;
		
		for(it = this->adj[node].begin(); it != this->adj[node].end(); it++){
			dfs(*it, visited);
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
		this->adj[b].push_back(a);
	}	
	
	bool verifica(int e){
		bool *visited = new bool[n];
		memset(visited, 0, n * sizeof (bool));
				
		dfs(1, visited);
		
		for(int i = 1; i <= e; i++)
			if(visited[i] == false) return false;
		
		return true;
	}
	
};

int main(){
	
	int e, l;
	int a, b;
	int teste = 1;	

	while(cin >> e >> l && (e + l)){
	
		Grafo g(e);
		
		for(int i = 0; i < l; i++){
			cin >> a >> b;
			g.cria_adjacencia(a, b);
		}
		
		cout << "Teste " << teste++ << endl;
			
		if(g.verifica(e)) cout << "normal" << endl;
		else cout << "falha" << endl;
		
		cout << endl;
	}
	return 0;
}