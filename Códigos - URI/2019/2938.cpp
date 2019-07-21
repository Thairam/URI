#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int p, c, n;
	scanf("%d %d %d", &p, &c, &n);
	int v[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}

	int cont = 0;
	int peso_total = p+c;
	
	if(peso_total > v[0]){
		c -= (peso_total - v[0]);
		peso_total = v[0];
	}
	
	for(int i = 1; i < n; i++){
		if(peso_total > v[i]){
			c -= (peso_total - v[i]);
			if(c < 0) break;
			else{
				peso_total = v[i];
				cont += 1;
			} 				
		}
	}
	
	printf("%d\n", cont);
	
	return 0;
}