#include <bits/stdc++.h>

using namespace std;

int q[1001][1001];
int ans[1001];

// O Algoritmo pega o resultado da menor coluna

int main(){
	
	int n, m;
	int x;
	
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> x;
			q[i][j] = x;
		}
	}
	
	int valor = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			valor+= q[j][i];
		}
		ans[i] = valor;
		valor = 0;
	}
	
	int aux = ans[0];
	
	for(int i = 1; i < n; i++){
		if(ans[i] < aux) aux = ans[i];
	}

	cout << aux << endl;
	
	
	return 0;
}