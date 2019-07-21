#include <bits/stdc++.h>

using namespace std;

/* 
Problema: Levando em consideração que o canhão pode ser carregado uma única vez, 
respeitando o seu limite de quilos (W), a sua tarefa é carregar o canhão com projéteis 
que não ultrapassem o seu limite de carga mas que façam o maior estrago possível, 
para saber se a missão (destruir um castelo de resistência r ) foi completada ou não.
*/

// capacidade do canhão, vetor de pesos, vetor de beneficios, nº de elementos
int knapsack(int W, int wt[], int b[], int n){
	
	//tabela que será preenchida
	int V[n + 1][W + 1];
	
	// inicializando a primeira linha e primeira coluna com 0
	for(int w = 0; w <= W; w++)
		V[0][w] = 0;
	for(int i = 1; i <= n; i++)
		V[i][0] = 0;
	
	for(int i = 1; i <= n; i++){
		for(int w = 1; w <= W; w++){
			// elemento pode fazer parte da solução
			if(wt[i - 1] <= w)
				V[i][w] = max(b[i - 1] + V[i - 1][w - wt[i - 1]], V[i - 1][w]);
			else
				V[i][w] = V[i - 1][w];
		}
	}
	
	return V[n][W];
	
}

int main(){
	
	int t;
	scanf("%d", &t);
	
	while(t--){
		int n, x, y, k, r;
		scanf("%d", &n); // número de projeteis
		int power[n+1], pesos[n+1];
		
		for(int i = 0; i < n; i++){
			//poder de destruição e peso do projetil
			scanf("%d %d", &x, &y);
			power[i] = x;
			pesos[i] = y;
		}
		
		//capacidade de carga do canhão e resisência do castelo
		scanf("%d %d", &k, &r);
		
		// capacidade do canhão, vetor de pesos, vetor de beneficios, nº de elementos
		int res = knapsack(k, pesos, power, n);
		
		if(res >= r) printf("Missao completada com sucesso\n");
		else printf("Falha na missao\n");
		
	}
	
	return 0;
}