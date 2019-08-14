#include <bits/stdc++.h>
#define MAXN 60

using namespace std;

int m[MAXN][MAXN];
int v[MAXN];

void set_matriz(int n){
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			m[i][j] = abs(v[i] - v[j]);			
			m[j][i] = abs(v[i] - v[j]);
		}
	}
}

int get_maior(int line, int n, int b, bool * used, int & pos){
	if(used[line]) return 0;
	int maior = -1;
	
	for(int i = 0; i < n; i++){
		if(m[line][i] > maior && i != line && i != b && !used[line]){
			maior = m[line][i];
			pos = i;
		}
		
	}
	return maior;
}

void zerar(int n, int pos){
	for(int i = 0; i < n; i++){
		m[pos][i] = 0;
		m[i][pos] = 0;
	}
}

int solve(int n){
	memset(m, 0, MAXN * sizeof(int));
	set_matriz(n);	
	
	bool used[n];
	memset(used, false, n * sizeof(bool));
	
	int a = 0, b = n-1;
	int ans = m[a][b];
	m[a][b] = 0;
	m[b][a] = 0;
	int cont = n-2;
	
	int p1, p2;
	for(int i = 0; i < cont; i++){
		
		int x = get_maior(a, n, b, used, p1);
		int y = get_maior(b, n, a, used, p2);
		
		if(x >= y){
			ans += x;
			zerar(n, a);
			used[a] = true;
			a = p1;
		}
		else{
			ans += y;
			zerar(n, b);
			used[b] = true;
			b = p2;
		}		
	}
			
	return ans;
}

int main(){
	
	int t, n;
	scanf("%d", &t);
	
	for(int k = 1; k <= t; k++){
		scanf("%d", &n);
		memset(v, 0, n * sizeof(int));
		
		for(int i = 0; i < n; i++){
			scanf("%d", &v[i]);
		}				
		
		sort(v, v+n);
		printf("Case %d: %d\n", k, solve(n));
	}
	
	return 0;
}