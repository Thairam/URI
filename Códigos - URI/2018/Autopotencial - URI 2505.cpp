#include <bits/stdc++.h>
#define lld long long int


using namespace std;

lld exp(int x, int n, int mod){
	lld r = 1;
	lld power = x;
	
	while(n > 0){
		
		if(n%2 == 1)
			r = (r * power) % mod;
		
		n/= 2;
		power = (power*power) % mod;
	}
	return r;
}

int c(int x){
	int cont = 0;
	while(x > 0){
		x/= 10;
		cont++;
	}
	return cont;
}

int main(){
	int r;
	
	while(scanf("%d", &r) != EOF){
		int cont = 0;
		cont = c(r);
						
		int mod = pow(10, cont);
		
		int res = exp(r, r, mod);
		
		if(res == r)
			printf("SIM\n");
		else printf("NAO\n");
		
	}
			
	return 0;
}