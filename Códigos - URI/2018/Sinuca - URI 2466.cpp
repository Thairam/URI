#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d", &n);
	
	int matriz[n][n];
	memset(matriz, 0, sizeof(matriz));
	
	for(int i = 0; i < 1; i++){
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1; j++){
			if(matriz[i][j] == matriz[i][j + 1]){
				matriz[i + 1][j] = 1;
			}else {
				matriz[i + 1][j] = -1;
			}
		}
	}
	if(matriz[n-1][0] == -1){
		printf("branca\n");
	}else {
		printf("preta\n");
	}	
	
	return 0;
}