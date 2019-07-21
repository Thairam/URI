#include <bits/stdc++.h>

using namespace std;

char tab[101][101];

int getMax(int n){
	
	int j = 0;
	int cont = 0, maior = 0;
	
	for(int i = 0; i < n; i++){
		if(j == n){
			for(j = n - 1; j >= 0; j--){
				if(tab[i][j] == 'o')
					cont++;
				else if(tab[i][j] == 'A'){
					if(maior <= cont){
						maior = cont;
					}
						cont = 0;
				}   	
			}

		} else {
			for(j = 0; j < n; j++){
				if(tab[i][j] == 'o')
					cont++;
				else if(tab[i][j] == 'A'){
					if(maior <= cont){
						maior = cont;
					}
					cont = 0;				
				}
			}
		}
	}
		
		return max(maior, cont);
}

int main(){
	
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> tab[i][j];
		}
	}
	
	cout << getMax(n) << endl;
	
	
		
	return 0;
}