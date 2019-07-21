#include <bits/stdc++.h>
#include <map>
#include <queue>

using namespace std;

int main(){
	
	int n, m;
	map<string, int> mapa;
	queue<string> fila;
	int endereco;
		
	cin >> n >> m;
	string x = 0;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		mapa[x] = i;   	
	}
	
	for(int i = 0; i < m; i++){
		cin >> x;
		fila.push(x);
	}
	
	int result = 0;
	int carteiro = 0;	
	
	while(!fila.empty()){
		x = fila.front();
		if(mapa.count(x)){
			endereco = mapa.find(x)->second;	
			result+= abs(carteiro - endereco);
			carteiro = endereco;
			fila.pop();   	
		}
	}
	
	cout << result << endl;
	
	return 0;
}