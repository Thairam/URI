#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, flag = -1, ant = -1;
	cin >> n;
	
	int cont = 0, k;
	
	for(int i = 0; i < n; i++){
		cin >> k;
		
		if(ant != flag && k - ant < 10){
			cont-= 10 - (k - ant);
		}
		ant = k;
		cont+= 10;
	}
	
	cout << cont << endl;
	
	return 0;
}