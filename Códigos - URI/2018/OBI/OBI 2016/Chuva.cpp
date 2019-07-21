#include <bits/stdc++.h>

using namespace std;

int secoes[1000001];
bool be[1000001];
bool bd[1000001];

int main(){
	
	
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> secoes[i];
	}
	
	int x, y;
	x = secoes[0]; y = secoes[n - 1];
	
	for(int i = 1; i < n; i++){
		if(secoes[i] < x) be[i] = true;
		x = max(x, secoes[i]);
	}
	
	for(int i = n - 2; i > 0; i--){
		if(secoes[i] < y) bd[i] = true;
		y = max(y, secoes[i]);
	}
	
	int cont = 0;
	for(int i = 1; i < n; i++){
		if(be[i] && bd[i]) cont++;
	}
	
	cout << cont << endl;
	
	
	return 0;
}