#include <bits/stdc++.h>

using namespace std;

bool is_divisible(char *bin, int n, int mod){
	int soma = 0;
	int p = 1;
	
	for(int i = n; i >= 0; i--){
		if(bin[i] == '1')
			soma = (soma + p) % mod;
		p = (p * 2) % mod;
	}

	return soma % mod == 0 ? true : false;
}

int compare (const void * a, const void * b){return ( *(int*)a - *(int*)b );}

int main(){
	
	char bin[100010];
	int n, x, cont = 0;
	scanf(" %s", &bin);
	scanf("%d", &n);
	
	int v[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &x);		
		if( is_divisible(bin, strlen(bin) - 1, x) ){
			v[cont++] = x;
		}				
	}
		
	if(cont == 0){
		printf("Nenhum\n");
	}else{
	   	qsort(v, cont, sizeof(int), compare);
		
		for(int i = 0; i < cont; i++){
			printf("%d", v[i]);
			if(i < cont - 1)
				printf(" ");
		}
		printf("\n");		
	}
	
	return 0;
}