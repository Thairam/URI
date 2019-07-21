#include <bits/stdc++.h>

using namespace std;

bool procura(vector<int> &est, int id, int tam){
	if( (id + tam) > est.size()) return false;
	for(int i = 0; i < tam; i++){
		if( est[id + i] != 0) return false;
	}
	return true;
}

void estaciona(vector<int> &est, int id, int tam, int placa){
	for(int i = 0; i < tam; i++){
		est[id + i] = placa;
	}
}

int main(){
	
	int comp, n;
	
	while(cin >> comp >> n){
		
		char op;
		int placa, tam;
		
		vector<int> estacionamento(comp);
		long long tarifa = 0;
		
		for(int i = 0; i < n; i++){
			
			cin >> op >> placa;
			
			if(op == 'C'){
				
				int encontrada = 0;
				cin >> tam;
				
				for(int j = 0; j < comp && !encontrada; j++){
				
					if(procura(estacionamento, j, tam)){
						estaciona(estacionamento, j, tam, placa);
						tarifa+= 10;
						encontrada = 1;
					}
				}
			}
			else {
				for(int i = 0; i < comp; i++){
					if(estacionamento[i] == placa)
						estacionamento[i] = 0;
				}
			}
		}
		cout << tarifa << endl;
	}
	
	return 0;
}