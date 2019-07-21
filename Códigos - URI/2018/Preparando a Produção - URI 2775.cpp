#include <bits/stdc++.h>

using namespace std;

int vetor[1002];
int val[1002];

int change(int n){
	int total = 0, j;
	for(int i = 1; i < n; i++){
		j = i;
		while(vetor[j] != i){
			j++;
		}
		
		int aux = 0;
		
		for(int k = j; k > i; k--){
			aux = vetor[k];
			vetor[k] = vetor[k - 1];
			vetor[k - 1] = aux;
			total+= val[vetor[k]] + val[vetor[k - 1]];   	
		}
		
		
	}
	return total;
}

int main(){
	
	int n;
	
	while(cin >> n){
		
		memset(vetor, 0, sizeof vetor);
		memset(val, 0, sizeof val);
		
		for(int i = 1; i <= n; i++){
			cin >> vetor[i];
		}
		

		for(int i = 1; i <= n; i++){
			cin >> val[vetor[i]];
		}
		
		cout << change(n) << endl;
		
	}
	
	return 0;
}