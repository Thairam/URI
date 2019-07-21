#include <bits/stdc++.h>

using namespace std;

int v[100010];



int calcula(int n){

	int resultados[7] = {0};	
	
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= 6; j++){
			resultados[j] += 1;
		}
		resultados[7 - v[i]]++;
		resultados[v[i]]--;
	}
	
	int menor = resultados[1];
	
	for(int i = 2; i <= 6; i++){
		menor = min(menor, resultados[i]);
	}
	
	return menor;
}

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
		
	}
	
	cout << calcula(n) << endl;
	
	return 0;
}