#include <bits/stdc++.h>

using namespace std;

int subset[26];

int busca(int v){
	if(subset[v] == v)
		return v;
	return busca(subset[v]);
}

void unir(int subset[], int v1, int v2){
	int v1_set = busca(v1);
	int v2_set = busca(v2);
	
	subset[v1_set] = v2_set;
}

void make_set(int v){
	subset[v] = v;
}

void imprimir_conjunto(int x, int v, bool *impressos, int &cont){
	int y = busca(x);
	
	if(impressos[y] == true) return;
	impressos[y] = true;
	cont++;
	
	printf("%c,", x + 'a');
	
	for(int i = x + 1; i < v; i++){
		if(busca(i) == y){
			printf("%c,", i + 'a');
		}	
	}
	cout << endl;
}

int main(){
	
	int n, v, a, x = 0, y = 0;
	char c1, c2;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> v >> a;
		int cont  = 0;
		
		for(int i = 0; i < v; i++){
			make_set(i);
		}

		while(a--){
			cin >> c1 >> c2;
			x = c1 - 'a';
			y = c2 - 'a';
			unir(subset, x, y);
		}
		
		bool impressos[26] = {false};
		
		printf("Case #%d:\n", i);
		
		for(int i = 0; i < v; i++){
			imprimir_conjunto(i, v, impressos, cont);	
		}
		
		printf("%d connected components\n", cont);
		cout << endl;
	}
	
	return 0;
}
