#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main(){
	
	int n, p;
	
	while( cin >> n >> p && n + p ){
		
		vector<stack<int> > vetor(p);
		
		int tam, id;
		int x = 0, y = 0;
		
		for(int i = 0; i < p; i++){
			cin >> tam;
			
			for(int j = 0; j < tam; j++){
				cin >> id;
				vetor[i].push(id);
						  		
				if(id == 1){
					//(x) guarda a pilha e (y) a posicao (base -> topo) do inventário na pilha
					x = i, y = j; 
				}
			}
		}
		
		 int esq = 0, dir = 0;
		 
		 // Verifica a quantidade de caixas quem terão de ser desempilhadas a direita
		 for(int i = x + 1; i < p; i++){
			 if(vetor[i].size() > y){
				 dir += vetor[i].size() - y;
			 }
			 else break;
		 }
	 
         // Verifica a quantidade de caixas quem terão de ser desempilhadas a equerda	
	     for(int i = x - 1; i >= 0; i--){
			 if(vetor[i].size() > y){
				 esq += vetor[i].size() - y;
			 }
			 else break;
		 }		
	 
	 	 cout << min(esq, dir) + vetor[x].size() - y - 1 << endl;
	}
	
	return 0;
}