#include <bits/stdc++.h>
#define MAX 100010

using namespace std;

int bit[MAX];
int buggies[MAX]; //array auxiliar que conterá a quantidade inicial de buggies. 
	
// Atualiza a posição i com o valor de 'x'
void update(int i, int x, int n){
	while(i <= n){
		bit[i] += x; 
		i+= (i & -i); 
	}
}

//Retorna a soma de 1...i
int get_Sum(int i){
	int x = 0;
	
	while(i){
		x+= bit[i];
		i-= (i & -i);
	}
	return x;
}

int main(){
	int n;
	cin >> n;

	for(int i  = 1; i <= n; i++){
		scanf("%d", &buggies[i]);
		update(i, buggies[i], n);
	}
	
	char op;
	int pos;
	
	while(scanf("\n%c %d", &op, &pos) != EOF){
		if(op == 'a')
			update(pos, -buggies[pos], n);
		else
			printf("%d\n", get_Sum(pos - 1));
	}
	
	return 0;
}