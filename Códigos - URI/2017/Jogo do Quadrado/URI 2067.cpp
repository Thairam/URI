#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int matriz[210][210];
	int aux[210][210];
	int n=0, m=0, q=0, maior=0;
	memset(aux, 0 , sizeof aux);
	scanf("%d %d", &n, &m);
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j] == 0) aux[i][j] = 0;
			else{
				aux[i][j] = min(aux[i-1][j-1], min(aux[i-1][j], aux[i][j-1])) + 1;
				maior = max(maior, aux[i][j]);
			} 
		}
	}
	
	scanf("%d", &q);
	while(q--){
		int x=0;
		scanf("%d", &x);
		if(x <= maior){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
}
