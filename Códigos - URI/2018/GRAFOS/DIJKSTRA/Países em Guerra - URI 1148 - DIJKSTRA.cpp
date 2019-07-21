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

int dijkstra(int a, int b, int n){
	
	int visitados[n + 1];
	int dist[n + 1];
	
	memset(visitados, 0, sizeof visitados);
	memset(dist, 1, sizeof dist);
	
	dist[a] = 0;
		
	int atual = a;
	
	do {
		visitados[atual] = 1;
		if(visitados[b] == 1) break;
		
		for(int i = 1; i <= n; i++){
			if(m[atual][i] != -1){
				dist[i] = min( dist[i], dist[atual] + m[atual][i] );
			}
		}
		
		atual = getMenor(visitados, dist, n);
		
	} while(atual != 0);

	return dist[b] < dist[0] ? dist[b] : -1;		
		
}

int main(){
	
	int n, e;
	
	while(scanf("%d %d", &n, &e) && n+e){

		memset(m, -1, sizeof m);		
		int x, y, h;
		
		for(int i = 0; i < e; i++){
			
			scanf("%d %d %d", &x, &y, &h);
			m[x][y] = h;
			if(m[y][x] != -1){
				m[x][y] = 0;
				m[y][x] = 0;
			}
		}
		
		int k, o ,d;
		scanf("%d", &k);
		
		for(int i = 0; i < k; i++){
			int res = 0;
			scanf("%d %d", &o, &d);
			
			res = dijkstra(o, d, n);
			if(res == -1)
				printf("Nao e possivel entregar a carta\n");
			else printf("%d\n", res);
		}
	
		printf("\n");
	}
		
	return 0; 
}