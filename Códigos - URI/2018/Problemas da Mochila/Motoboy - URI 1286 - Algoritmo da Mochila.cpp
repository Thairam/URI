#include <bits/stdc++.h>

using namespace std;

int knapsack(int cap, int wt[], int b[], int n){
	
	long long V[n + 1][cap + 1];
	
	for(int i = 0; i <= cap; i++)
		V[0][i] = 0;
	for(int j = 1; j <= n; j++)
		V[j][0] = 0;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= cap; j++){
			if(wt[i - 1] <= j){
				V[i][j] = max(b[i - 1] + V[i - 1][j - wt[i - 1]], V[i - 1][j]);
			}
			else
				V[i][j] = V[i - 1][j];
		}
	}
	
	return V[n][cap];
}

int main(){
	
	int n;
	while(scanf("%d", &n) && n){
		//capacidade
		int p;
		int pizzas[n+1], tempos[n+1];
		scanf("%d", &p);
		
		for(int i = 0; i < n; i++){
			//beneficios e pesos
			scanf("%d %d", &tempos[i], &pizzas[i]);
		}
		
		printf("%d min.\n", knapsack(p, pizzas, tempos, n));
		
	}
	
	return 0;
}