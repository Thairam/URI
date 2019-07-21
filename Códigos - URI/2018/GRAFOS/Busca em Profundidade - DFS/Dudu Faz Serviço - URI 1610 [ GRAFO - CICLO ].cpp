#include <bits/stdc++.h>

/* Soluçaõ: É basicamente, verificar se o grafo contém ciclo ou não! */

using namespace std;

bool ciclo = false;

class Grafo{
	int n;
	list<int> *adj;
	
 	void dfs(int node, int * visited){ 
 		
		if(visited[node] == 2)return;
		if(visited[node] == 1){
			ciclo = true;
			return;
		}
		
		visited[node] = 1;		
			
		list<int>::iterator it;
		for(it = this->adj[node].begin(); it != this->adj[node].end(); it++){
			dfs(*it, visited);
		}		
		visited[node] = 2;
	}	
public:
	Grafo(int n){
		this->n = n + 1;
		this->adj = new list<int>[this->n];   	
	}

	void cria_adjacencia(int a, int b){
		this->adj[a].push_back(b);
	}
	
	bool tem_ciclo(){
		int *visited = new int[n];
		memset(visited, 0, n * sizeof (bool));
		ciclo = false;
		
		for(int i = 1; i < n; i++){
			(dfs(i, visited));
			if(ciclo) return true;
		}
		return false;	
	}	
};

int main(){
		
	long long int n, m;
	int a, b;	
	int testes;

	cin >> testes;
	
	while(testes--){
	
		cin >> n >> m;
		
		Grafo g(n);
		
		for(int i = 1; i <= m; i++){
			cin >> a >> b;
			g.cria_adjacencia(a, b);
		}
		
		if(g.tem_ciclo()) cout << "SIM" << endl;
		else cout << "NAO" << endl;
		
	}
	
	return 0;
}