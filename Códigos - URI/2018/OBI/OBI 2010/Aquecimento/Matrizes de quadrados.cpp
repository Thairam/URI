#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

ull tamanho(ull x){
	int l = 1;
	
	while(x > 9){
		l++;
		x/= 10;
	}
	
	return l;
}

int main(){
	
	int n;
	int tam, cont = 4;
	cin >> n;
	
	while(n--){
		cin >> tam;
		
		ull m[tam][tam], coluna[tam], x, maxi = 0, size;
		
		for(int i = 0; i < tam; i++){
			for(int j = 0; j < tam; j++){
				cin >> x;
				x*= x;
				
				m[i][j] = x;
			}
		}
		
		for(int j = 0; j < tam; j++){
			for(int i = 0; i < tam; i++){
				size = tamanho(m[i][j]);
				maxi = max(maxi, size);							
			}
			coluna[j] = maxi;
			maxi = 0;
		}		
		
		printf("Quadrado da matriz #%i:\n", cont);
	
		ull sub, dif;
			
		for(int i = 0; i < tam; i++){
			for(int j = 0; j < tam; j++){
				sub = tamanho(m[i][j]);
				dif = coluna[j] - sub;
				
				for(int k = 0; k < dif; k++)
					cout << " ";
				
				printf("%llu", m[i][j]);
				
				if(j != (tam - 1)) cout << " ";
			}
			cout << endl;	
		}
		
		cont++;
		if(n >= 1) cout << endl;
	}
		
	return 0;
}