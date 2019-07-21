#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int matriz[101][101];
	
	int l, c;
	int resultado = 0;
	int cont = 0;
	int vetor[101];
	
	memset(vetor, 0, sizeof(vetor));
	
	scanf("%d %d", &l, &c);
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			
			cin >> matriz[i][j];
			
			if(matriz[i][j] == 0){
				cont = 0;
			} else {
				cont++;
			}
			
			if( (j == (c - 1)) && (cont == c) )
				resultado++;
		}
		cont = 0;
	}	
	
	cout << resultado << endl;
	
	return 0;
}