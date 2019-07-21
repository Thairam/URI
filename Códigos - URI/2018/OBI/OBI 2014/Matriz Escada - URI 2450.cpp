#include<bits/stdc++.h>

using namespace std;

int matriz[501][501];

bool verifica(int n, int m){
	
	int qtd = 0;
	bool flag;
	
	for(int i = 0; i < n; i++){
		
		int aux = 0;
		flag = true;
		
		for(int j = 0; j < m; j++){
			
			if(matriz[i][j] == 0 && flag) aux++;
			else flag = false;
		}
	
		if(i > 0){
			if( !(aux > qtd || (aux == qtd && aux == m)) )
				return false;
			
			qtd = aux;   	
		}
	}
	
	return true;
	
}

int main() 
{
    int n,m;

	cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
			cin >> matriz[i][j];
        }
    }
   
	cout << ((verifica(n, m))? "S": "N") << endl;
   

    return 0;
}