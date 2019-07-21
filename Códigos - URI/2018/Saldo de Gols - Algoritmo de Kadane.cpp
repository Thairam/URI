#include <bits/stdc++.h>

using namespace std;

/*Algoritmo de kadane - O(n)
Encontra um sub-vetor com a maior soma possível, 
onde este sub-vetor é uma sub-lista contigua.
*/

int v[10010];

//n - tam do vet, x e y passados por referência.
//os valores de base e limite do intervalo.
int kadane(int n, int &x, int &y){
	int max_atual = 0, aux = 0, max_total = -1;
	
	for(int i = 0; i < n; i++){
		max_atual+= v[i];
		
		if(max_atual < 0){
			max_atual = 0;
			aux = i + 1;
		}
		if(max_atual >= max_total){
			max_total = max_atual;
			x = aux;
			y = i;
		}
	}
	// maior soma no intervalo contiguo [x, y]
	return max_total;
}

int main(){
	
	int n, t = 1, a, b;
	
	while(cin >> n && n){
		
		int x, y;
		
		for(int i = 0; i < n; i++){
			cin >> x >> y;
			v[i] = x - y;
		}
		
		
		if(kadane(n, a, b) > 0) printf("Teste %d\n%d %d\n", t, a+1, b+1);
		else printf("Teste %d\nnenhum\n", t);
		cout << endl;
		t++;
	}
	
	return 0;
}