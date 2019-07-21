#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int sorteados[6];
	int jogados[6];
	string v[7] = {"azar", "azar", "azar", "terno", "quadra", "quina", "sena"};
	
	for(int i = 0; i < 6; i++){
		cin >> sorteados[i];
	}
	
	for(int j = 0; j < 6; j++){
		cin >> jogados[j];	
	}
	int count = 0;
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(sorteados[i] == jogados[j]){
				count++;
			}
		}
	}
	cout << v[count] << endl;
	
	
	return 0;
}