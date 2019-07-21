#include <bits/stdc++.h>

using namespace std;

/* 
Problema: Levando em considera��o que o canh�o pode ser carregado uma �nica vez, 
respeitando o seu limite de quilos (W), a sua tarefa � carregar o canh�o com proj�teis 
que n�o ultrapassem o seu limite de carga mas que fa�am o maior estrago poss�vel, 
para saber se a miss�o (destruir um castelo de resist�ncia r ) foi completada ou n�o.
*/

// capacidade do canh�o, vetor de pesos, vetor de beneficios, n� de elementos
int knapsack(int W, int wt[], int b[], int n){
	
	//tabela que ser� preenchida
	int V[n + 1][W + 1];
	
	// inicializando a primeira linha e primeira coluna com 0
	for(int w = 0; w <= W; w++)
		V[0][w] = 0;
	for(int i = 1; i <= n; i++)
		V[i][0] = 0;
	
	for(int i = 1; i <= n; i++){
		for(int w = 1; w <= W; w++){
			// elemento pode fazer parte da solu��o
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
		scanf("%d", &n); // n�mero de projeteis
		int power[n+1], pesos[n+1];
		
		for(int i = 0; i < n; i++){
			//poder de destrui��o e peso do projetil
			scanf("%d %d", &x, &y);
			power[i] = x;
			pesos[i] = y;
		}
		
		//capacidade de carga do canh�o e resis�ncia do castelo
		scanf("%d %d", &k, &r);
		
		// capacidade do canh�o, vetor de pesos, vetor de beneficios, n� de elementos
		int res = knapsack(k, pesos, power, n);
		
		if(res >= r) printf("Missao completada com sucesso\n");
		else printf("Falha na missao\n");
		
	}
	
	return 0;
}