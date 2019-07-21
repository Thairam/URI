
#include <bits/stdc++.h>

using namespace std;

int matriz[105][105];

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

int result(int n){
	int total = n;
	int *subset = (int*) malloc(n * sizeof(int));

	memset(subset, -1, sizeof(int) * n);
	
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(matriz[i][j] == 0){
				int v1 = busca(subset, i);
				int v2 = busca(subset, j);
				
				if(v1 != v2){ 
					total--;
					unir(subset, v1, v2);
				}
			}
		}
	}
	
	return total - 1;
}
		 
		 
int main(){
	
	int t, n, v;
	
	cin >> t;
	
	while(t--){
		
		cin >> n >> v;

		int a, b;
		memset(matriz, 0, sizeof matriz);
		
		for(int i = 0; i < v; i++){
			cin >> a >> b;
			matriz[a][b] = 1;
			matriz[b][a] = 1;
		}
		
		cout << result(n) << endl;
		
	}	
	
	return 0;
}		 