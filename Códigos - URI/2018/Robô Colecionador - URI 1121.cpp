#include <bits/stdc++.h>

using namespace std;

bool valida(char matriz[100][101],int n, int m, int &linha, int &coluna, int direcao){
	
	if(direcao == 0){
		if((linha - 1) < 0 || matriz[linha - 1][coluna] == '#') return false;
		linha--;
	
	}else if(direcao == 1){
		if((coluna + 1) > (m - 1) || matriz[linha][coluna + 1] == '#') return false;
		coluna++;
	
	}else if(direcao == 2){
		if((linha + 1) > (n -1)|| matriz[linha + 1][coluna] == '#') return false;
		linha++;
	
	}else if(direcao == 3){
		if((coluna - 1) < 0 || matriz[linha][coluna - 1] == '#') return false;
		coluna--;
	}
	
	return true;
	
}

int executa(char matriz[100][101], char instrucoes[50001], int linha, 
			int coluna, int n, int m ,int s, int &direcao) {
				
	int total = 0;
	
	for(int i = 0; i < s; i++){
		if(instrucoes[i] == 'D' ){
			direcao = (direcao + 1)%4;
			
		}else if(instrucoes[i] == 'E'){
			direcao = (direcao + 3)%4;
			
		}else {
			if(valida(matriz, n, m, linha, coluna, direcao)){
				if(matriz[linha][coluna] == '*'){
					total++;
					matriz[linha][coluna] = '.';
				}
			}
		}
	}
	
	return total;
}

int main(){
	
	int n, m, s;
	char matriz[100][101];
	char instrucoes[50001];
	char polos[4] = {'N', 'L', 'S', 'O'};
	int linha, coluna;
	int direcao;
	
	while(scanf("%d %d %d", &n , &m , &s) && n, m, s){
		
		memset(matriz, 0, sizeof(matriz));
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matriz[i][j];
				if(matriz[i][j] >= 65 && matriz[i][j] <= 90){
					linha = i;
					coluna = j;
					for(int k = 0; k < 4; k++){
						if(polos[k] == matriz[i][j]){
							direcao = k;
						}
					}
					matriz[i][j] = '.';	
				}
			}
		}
		
		for(int i = 0; i < s; i++){
			cin >> instrucoes[i];
		}
		cout << executa(matriz, instrucoes, linha, coluna, n, m, s, direcao) << endl;				
		
	}
		
	return 0;
}