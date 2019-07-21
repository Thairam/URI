#include <bits/stdc++.h>

using namespace std;

int main(){

	int v1[6];
	int v2[6];
	int x;
	int cont = 0;
	
	for(int i = 1; i<= 5; i++){
		scanf("%d", &x);
		v1[i] = x;
	}
	
	for(int i = 1; i<= 5; i++){
		scanf("%d", &x);
		v2[i] = x;
	}
	
	for(int i = 1; i<= 5; i++){
		if(v1[i] != v2[i]){
			cont++;
		}else{
			cont--;	
		}
	}
	
	if(cont == 5){
		printf("Y\n");
	}else printf("N\n");
	cont = 0;

	return 0;
}
