#include <bits/stdc++.h>
#include <map>


using namespace std;

map<string, int> pontos;
int m[100][100];

int get_Pos(string ponto){

	int id = pontos.size();
	
	if(pontos.count(ponto)){
		map<string, int>::iterator it;
		it = pontos.find(ponto);
		return it->second + 1;
	}
	else{
		pontos[ponto] = id++;
		return id;
	}	
}

int get_Menor(bool *visitados, int *dist, int n){
	
	int menor = 0;
	
	for(int i = 1; i <= n; i++){
		if(dist[i] < dist[menor] && !visitados[i])
			menor = i;
	}
	
	return menor;
}

int getMenor(int *visitados, int *dist, int n){
	
	int menor = 0;
	
	for(int i = 1; i <= n; i++){
		if(dist[i] < dist[menor] && !visitados[i]){
			menor = i;
		}
	}
	
	return menor;
}

int dijkstra(int a, int b, int n){
	
	int visitados[n+1];
	int dist[n+1];
	
	memset(visitados, 0, sizeof visitados);
	memset(dist, 1, sizeof dist);
	
	dist[a] = 0;
		
	int atual = a;
	
	do {
		visitados[atual] = 1;
		if(visitados[b] == 1) break;
		
		for(int i = 1; i <= n; i++){
			if(m[atual][i] > 0)
				dist[i] = min( dist[i], dist[atual] + m[atual][i] );
		}
		
		atual = getMenor(visitados, dist, n);
		
	} while(atual != 0);

	return dist[b];				
}

int main(){
	
	int x, n, v, t, limite = 1080;
	
	while(scanf("%d %d %d", &x, &n, &v) && x+n+v){
		
		memset(m, 0, sizeof(m));
		int p1, p2, hora;
		string o, d;
		(x <= 30 ? hora = 1050 : hora = 1070);
		
		for(int i = 0; i < n; i++){
			cin >> o >> d >> t;	
			p1 = get_Pos(o); p2 = get_Pos(d);
			m[p1][p2] = t;
		}
		
		int orig, dest;
		orig = get_Pos("varzea"); dest = get_Pos("alto");

		hora+= dijkstra(orig, dest, v);
		
		if(hora > limite)
			printf("%.2d:%.2d\nIra se atrasar\n", (hora/60), (hora%60));
		else
			printf("%.2d:%.2d\nNao ira se atrasar\n", (hora/60), (hora%60));
		
		pontos.clear();
		
	}
	
	return 0;
}