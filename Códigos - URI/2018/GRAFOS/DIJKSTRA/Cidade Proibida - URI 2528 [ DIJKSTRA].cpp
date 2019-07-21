#include <bits/stdc++.h>

using namespace std;

int m[1005][1005];

int getMenor(int *visitados, int *dist, int n){
	
	int menor = 0;
	
	for(int i = 1; i <= n; i++){
		if(dist[i] < dist[menor] && !visitados[i]){
			menor = i; //vértice possuinte da menor distância.
		}
	}
	
	return menor;
}

int dijkstra(int a, int b, int n, int e){
	
	int visitados[n + 1];
	int dist[n + 1];
	
	memset(visitados, 0, sizeof visitados);
	memset(dist, 1, sizeof dist); //preenche todos os bits do nº com 1.
	
	dist[a] = 0;
	visitados[e] = 1;
	
	int atual = a;
	
	do {
		visitados[atual] = 1;
		if(visitados[b] == 1) break;
		
		// relachamento das arestas.
		for(int i = 1; i <= n; i++){
			if(m[atual][i] == 1){
				dist[i] = min( dist[i], dist[atual] + m[atual][i] );
			}
		}
		
		atual = getMenor(visitados, dist, n);
		
	} while(atual != 0);

	return dist[b];		
		
}

int main(){
	
	int n, arestas;
	
	while(cin >> n >> arestas){

		memset(m, 0, sizeof m);		
		int a, b, c, r, e;
		
		for(int i = 0; i < arestas; i++){
			
			cin >> a >> b;
			m[a][b] = 1;
			m[b][a] = 1;
		}
		
		cin >> c >> r >> e;
		
		cout << dijkstra(c, r, n, e) << endl;
	}
		
	return 0; 
}