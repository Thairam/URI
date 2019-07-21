#include <bits/stdc++.h>
#include <list>

using namespace std;

long long int resultado;

class Grafo{
	int n; // quantidade de n�s do grafo
	list<int> *adj; // Lista de adjac�ncias para cada n� do grafo

	void dfs(int node, bool * visited, int &tam){
		if(visited[node]) return; // se o n� j� foi visitado return
				
		visited[node] = true;
		
		list<int>::iterator it;
		
		//Percorre todas as adjac�ncias do n� i
		for(it = this->adj[node].begin(); it != this->adj[node].end(); it++){
			tam++;
			dfs(*it, visited, tam);
		}

	}
	
// Todos os m�todos abaixo ser�o p�blicos	
public:
	Grafo(int n){
		this->n = n + 1;
		this->adj = new list<int>[this->n];   	
	}

	// Para Grafos n�o direcionados (cria adj ida e volta)
	void cria_adjacencia(int a, int b){
		this->adj[a].push_back(b);
		this->adj[b].push_back(a);
	}	
	
	long long int resp(int e){
		bool *visited = new bool[n];
		int tam;
		memset(visited, 0, n * sizeof (bool)); 		

		for(int i = 1; i <= e; i++){
			tam = 0;
			dfs(i, visited, tam);
			resultado -= ( (1 + (tam/2)) * (tam/2)) / 2;
		}
		
		return resultado;	
	}
	
};

int main(){
	
	// n�s
	long long int e;
	int a, b, p;
	
	cin >> e;
	
	resultado = ( (1 + (e - 1))* (e - 1) ) / 2 ;
	
	Grafo g(e);
		
	for(int i = 1; i < e; i++){
		cin >> a >> b >> p;
		if(p == 0){
			g.cria_adjacencia(a, b);
		}
	}
	
	cout << g.resp(e) << endl;
				
	return 0;
}