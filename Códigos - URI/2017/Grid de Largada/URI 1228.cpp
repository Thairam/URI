#include <bits/stdc++.h>

using namespace std;

int main(){
	int inicio[30];
	int fim[30];
	int aux[30];
	int n;
	
	while(scanf("%d", &n) != EOF){
		int final = 0;
		int v = 0;
		
		while(v < n){
			scanf("%d", &inicio[v]);
			v++;
		}
		v = 0;
		while(v < n){
			scanf("%d", &fim[v]);
			v++;
		}
		
		for(int i =0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(inicio[i] == fim[j]){
					aux[j] = i + 25;
				}
			}
		}
		
		for(int i =0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(aux[i] > aux[j]){
					v = aux[j];
					aux[j] = aux[i];
					aux[i] = v;
					final++;
				}
				
			}
		}
		printf("%d\n", final);
		
	}
	return 0;
}
