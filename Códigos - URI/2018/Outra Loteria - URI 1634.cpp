#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	return (b == 0)? a : gcd(b, a%b);
}

int main(){
	
	int n, m;

	while(scanf("%d %d", &n, &m) && n+m){
		int matriz[n][m];
		
		int total = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &matriz[i][j]);
			}
			total+= matriz[i][m-1];
		}
		
		for(int i = 0; i < n; i++){
			int mdc = gcd(matriz[i][m - 1], total);
			printf("%d / %d\n", matriz[i][m - 1] / mdc, total / mdc);
		}	
	}
			
	return 0;
}