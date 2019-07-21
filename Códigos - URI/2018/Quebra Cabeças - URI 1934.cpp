#include <bits/stdc++.h>
#include <map>
#include <set>


using namespace std;

int n, m;
string matriz[101][101];
int s_linha[101], s_col[101];

map<string, int> valores;
set<string> total;

int main(){
	
	while(cin  >> n >> m){
		valores.clear(); total.clear();
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matriz[i][j];
				total.insert(matriz[i][j]);
			}
			cin >> s_linha[i];
		}
		
		for(int i = 0; i < m; i++)
			cin >> s_col[i];
		
		while(valores.size() < total.size()){
			
			for(int i = 0; i < n; i++){
				map<string, int> not_calc;
				int soma = 0;
				
				for(int j = 0; j < 	m; j++){
					if(valores.find(matriz[i][j]) == valores.end())
						not_calc[matriz[i][j]]++;
					else
						soma += valores[matriz[i][j]];
				}
				if(not_calc.size() == 1){
					pair<string, int> p = *not_calc.begin();
					valores[p.first] = (s_linha[i] - soma) / p.second;
  	  	  	    }	
			}
				
			for(int j = 0; j < m; j++){
				map<string, int> not_calc;
					int soma = 0;
					
				for(int i = 0; i < n; i++){
					if(valores.find(matriz[i][j]) == valores.end())
						not_calc[matriz[i][j]]++;
					else
						soma+= valores[matriz[i][j]];
				}		
				if(not_calc.size() == 1){
					pair<string, int> p = *not_calc.begin();
					valores[p.first] = (s_col[j] - soma) / p.second;
				} 
			}
		}
		
		map<string, int>::iterator it;
		for(it = valores.begin(); it != valores.end(); it++){
			cout << it->first << " " << it->second << endl;
        }		
	}	
	
	return 0;
}