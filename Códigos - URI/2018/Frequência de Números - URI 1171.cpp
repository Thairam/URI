#include <bits/stdc++.h>

using namespace std;

int main (){
		int vetor[100000];
		
		int n, x;
		
		scanf("%d", &n);
		memset(vetor, 0, sizeof(vetor));
		for(int i = 0; i < n; i++){
			scanf("%d", &x);
			vetor[x] += 1;
		}
		for(int i = 0; i < 100000; i++){
			if(vetor[i] != 0 ){
				printf("%d aparece %d vez(es)\n", i, vetor[i]);
			}
		}
			
	return 0;
}
