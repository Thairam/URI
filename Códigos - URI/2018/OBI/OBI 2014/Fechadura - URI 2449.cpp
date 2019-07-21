#include <bits/stdc++.h>

using namespace std;

int fechadura[1001];

int desbloq(int n, int m){
	
	int result = 0;
	int aux = 0;
	int cont = 0;
	
	for(int i = 0; i < n; i++){
		
		if(fechadura[i] < m){
			aux = fechadura[i];
			result = m - aux;
			fechadura[i] = m;
			fechadura[i + 1]+= result;
			cont+= result; 
		}
		else if(fechadura[i] > m){
			aux = fechadura[i];
			result = m - aux;
			fechadura[i] = m;
			fechadura[i + 1]+= result;
			cont-= result; // - - = +
		}
	}
	
	return cont;
}

int main(){
	
	int n, m;
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		cin >> fechadura[i];
	}
	
	cout << desbloq(n, m) << endl;	
	
	return 0;
}