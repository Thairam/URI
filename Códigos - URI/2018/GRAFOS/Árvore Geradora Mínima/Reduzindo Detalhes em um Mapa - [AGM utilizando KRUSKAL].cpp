#include <bits/stdc++.h>
#include <queue>
#define MAX 10002

using namespace std;


typedef struct aresta{
	int a, b, peso;
};

int busca(int subset[], int v){
	if(subset[v] == -1)
		return v;
	return busca(subset, subset[v]);
}									

void unir(int subset[], int v1, int v2){
	int v1_set = busca(subset, v1);
	int v2_set = busca(subset, v2);
	
	subset[v1_set] = v2_set;
}

int kruskal(int tam, priority_queue <aresta> &fila){
		int total = 0;
		int subset[MAX];
		memset(subset,  -1, sizeof(subset));

		for(int i = 0; i < tam; i++){
			
			int v1 = busca(subset, fila.top().a);
			int v2 = busca(subset, fila.top().b);

			if(v1 != v2){
				unir(subset, v1, v2);
				total+= fila.top().peso;
			}
			
			fila.pop();
		}
		
		return total;
}

bool operator < (const aresta& arco1, const aresta &arco2){
	  	
	 if(arco1.peso > arco2.peso) return true;
	 return false;
	 
}

int main(){

	priority_queue<aresta> fila;
	
	int r, c;
	
	cin >> r >> c;
	
	
	for(int i = 0; i < c; i++){

		aresta nova;
		cin >> nova.a >> nova.b >> nova.peso;
		
		fila.push(nova);   	
			  		   	
	}
	
	cout << kruskal(fila.size(), fila) << endl;
	   	
	return 0;
}