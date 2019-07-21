#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int linha, coluna;
	
	scanf("%d %d", &linha, &coluna);
	
	int soma_linha[101];
	int soma_coluna[101];
	
	memset(soma_linha, 0, sizeof(soma_linha));
	memset(soma_coluna, 0, sizeof(soma_coluna));
	
	int matriz[linha][coluna];
	
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < coluna; j++){
			cin >> matriz[i][j];	
			soma_linha[i] += matriz[i][j];
		}
	}
	
	
	
	for(int j = 0; j < coluna; j++){
		for(int i = 0; i < linha; i++){
			soma_coluna[j] += matriz[i][j];
		}
	}
	
	int maior_linha = 0;
	int maior_coluna = 0;
	
	for(int i = 0; i < linha; i++){
		if(soma_linha[i] > maior_linha){
			maior_linha = soma_linha[i];
		}
	}
	
	for(int i = 0; i < coluna; i++){
		if(soma_coluna[i] > maior_coluna){
			maior_coluna = soma_coluna[i];
		}
	}

	if(maior_linha >= maior_coluna) cout << maior_linha << endl;
	else cout << maior_coluna << endl;

	
	return 0;
}