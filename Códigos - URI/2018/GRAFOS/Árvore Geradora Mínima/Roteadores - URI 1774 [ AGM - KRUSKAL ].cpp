#include <bits/stdc++.h>
#include <queue>
#define MAX 10002

/* URI - 1774 ROTEADORES. Uma empresa possui uma infra-estrutura de rede, com alto valor de custo, 
e gostaria de saber se é possível economizar nesta infra-estrutura, economizando nos cabos
de rede, ou seja, minimizando a quantidade de conexões entre os roteadores, de forma que todos os 
roteadores consigam transmitir dados entre si e exista somente uma rota entre cada par de roteadores.

A solução para o problema é exatamente a construção de uma Árvore geradora mínima, que em sua construção
prioriza as arestas(cabos de rede) com menor custo. A saída equivale a soma dos custos da quantidade 
mínima de cabos que devem ser utilizados para que os roteadores funcionem como requerido no problema.
*/

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

int kruskal(int tam, priority_queue <aresta> &fila, int n){
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
		
		int res = subset[1];
		for(int i = 2; i <= n; i++){
			if(busca(subset, i) != res){
				res = -1;
				break;
			}
		}
		return (res == -1 ? res : total);
}

bool operator < (const aresta& arco1, const aresta &arco2){
	  	
	 if(arco1.peso > arco2.peso) return true;
	 return false;
}

int main(){

	priority_queue<aresta> fila;
	
	int r, c, ans;
	
	while(scanf("%d %d", &r, &c) != EOF){
	
		for(int i = 0; i < c; i++){
	
			aresta nova;
			cin >> nova.a >> nova.b >> nova.peso;
			
			fila.push(nova);   	
				  		   	
		}
		
		ans = kruskal(fila.size(), fila, r);
		if(ans == -1) cout << "impossivel\n";
		else cout << ans << endl;
	}

	return 0;
}