#include <bits/stdc++.h>
#include <queue>

using namespace std;


typedef struct aresta{
	int a, b, peso, tipo;
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
		int subset[1001];
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

// 0 pra ferrovia e 1 pra rodovia
bool operator < (const aresta& arco1, const aresta &arco2){
	 if(arco1.tipo == 1 && arco2.tipo == 0) return true;
	 if(arco1.tipo == 0 && arco2.tipo == 1) return false;
	 if(arco1.peso > arco2.peso) return true;
     else return false;
	 
}

int main(){

	priority_queue<aresta> fila;
	
	int n, f, r;
	
	cin >> n >> f >> r;
	
	for(int i = 0; i < (f + r); i++){

		aresta nova;
		cin >> nova.a >> nova.b >> nova.peso;
		if(i < f ) nova.tipo = 0;
		else nova.tipo = 1;
		
		fila.push(nova);   	
			  		   	
	}

	int tam = fila.size();
		
	cout << kruskal(tam, fila) << endl;
	   	
	return 0;
}