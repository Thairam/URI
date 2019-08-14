#include <bits/stdc++.h>

using namespace std;

int v[51];

int solve(int n){
	int max_atual = 0, max_total = -1;
	
	for(int i = 0; i < n; i++){
		max_atual += v[i];
		
		if(max_atual < 0){
			max_atual = 0;
		}
		
		if(max_atual > max_total){
			max_total = max_atual;
		}
	}
	
	return max_total;
}

int main(){
	
	int n, custo, valor;
	while(scanf("%d", &n) != EOF){
		scanf("%d", &custo);
		
		for(int i = 0; i < n; i++){
			scanf("%d", &valor);
			v[i] = valor - custo;
		}
		
		printf("%d\n", solve(n));
		memset(v, 0, sizeof v);
	}
	
	return 0;
}