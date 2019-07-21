#include <bits/stdc++.h>
#define TAM 10

using namespace std;

string mensagens[] = {"parte inferior a diagonal principal:", "parte superior a diagonal principal:", 
                      "diagonal secundaria:","diagonal superior direita alternada:",
					  "diagonal superior esquerda alternada:", "diagonal inferior esquerda alternada:"};

int m[TAM][TAM];

void inicializa(){
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++)
			m[i][j] = 0;
	}			   	
}


void show(int pos){
	cout << mensagens[pos] << endl;
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++)
			printf("%d ", m[i][j]);
		printf("\n");	
	}
	printf("\n");
	inicializa();
}

int main(){

	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(j < i) //parte inferior a diagonal principal
				m[i][j] = 1;
		}
	}
	show(0);

	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(j > i)  //parte superior a diagonal principal
				m[i][j] = 1;
		}
	}		
	show(1);
				
	//Atribui valores a diagonal secundaria
	for(int i = 0; i < TAM; i++){
		m[i][TAM - i - 1] = 1;
	}	
	show(2);
		
	//Atribui valores a diagonais superiores alternadas
	for(int k = 0; k < TAM; k+= 2){
		for(int i = 0; i < TAM - k; i++){
			m[i][i + k] = 1;
		}
	}
	show(3);
	
	//Atribui valores a diagonais esquerdas alternadas
	for(int k = 0; k < TAM; k+= 2){
		for(int i = 0; k - i >= 0; i++){
			m[i][k - i] = 1;
		}
	}
	show(4);

	//Atribui valores a diagonais inferiores alternadas
	for(int i = 0; i < TAM; i+= 2){
		for(int k = i; k < TAM; k++){
			m[k][k - i] = 1;
		}
	}	
	show(5);
			
	return 0;
}