#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	
	int n;
	
	while(cin >> n && n){
		
		map<string, string> assinaturas;
		string nome, origin;
		
		for(int i = 0; i < n; i++){
			cin >> nome >> origin;
			assinaturas[nome] = origin;	
		}
		
		int m, res = 0; cin >> m;
		string n2, ass_aula;
		map<string, string> lista;
		
		while(m--){
			cin >> n2 >> ass_aula;
			string aux = assinaturas[n2];
			
			if(aux.size() != ass_aula.size()){
				res++;
				continue;
			}
			
			int flag = 0;
			
			for(int i = 0; i < aux.size(); i++){
				if(aux[i] != ass_aula[i])
					flag++;
			}
			res+= flag > 1;
		}
		cout << res << endl;
	}
	
	return 0;
}