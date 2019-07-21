#include <bits/stdc++.h>
#define lii list<pair<int, int> >
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define vii vector<pair<int, int>

using namespace std;

/* Dada a configuração da rede da IBO e a ilha em que a empresa deseja instalar o novo servidor,
 determine a diferença entre os pings da ilha com menor e maior pings até o servidor.
*/

class Grafo{
	int n;
	lii * adj;
	
public:
	Grafo(int n){
		this->n = n;
		this->adj = new lii[n+1];
	}
	
	void addAresta(int orig, int dest, int custo){
		adj[orig].pb(mp(dest, custo));
		adj[dest].pb(mp(orig, custo));
	}
		
	// caminho mais curto no grafo	
	int * dijkstra(int node){
		// vetor com o menor caminho de node até i
		int * dist = new int[n+1];
		bool * visited = new bool[n+1];
		priority_queue< pi, vii >, greater<pi > > fila;
		
		memset(dist, 1, (n+1) * sizeof(int));
		memset(visited, false, (n+1)* sizeof(bool));
		
		dist[node] = 0;
		
		fila.push(mp(dist[node], node));
		
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
		return dist;	
	}	
	
	int get_Result(int node, int n){
		int * dist = dijkstra(node);
		int maior = 0, menor = 10000000000;
		
		for(int i = 1; i<= n; i++){
			if(dist[i] > maior)
				maior = dist[i];
			
			if(i!= node && dist[i] < menor)
				menor = dist[i];
		}		
		return maior - menor;
	}	
};

int main(){
	
	// números de ilhas e cabos de fibra óptica
	int n, m;
	scanf("%d %d", &n, &m);
	
	Grafo g(n);
	int a, b, c, node;
	for(int i = 0; i < m; i++){
		// um cabo entre a e b com ping c
		scanf("%d %d %d", &a, &b, &c);
		g.addAresta(a, b, c);
	}
	
	// ilha em que o servidor está instalado   	
	scanf("%d", &node);
	cout << g.get_Result(node, n) << endl;
	
	return 0;
}