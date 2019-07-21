#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main () {
	
    int n;
	char vetor[100000];
    char comandos[100000];
    char aux[100000];

    while (cin>> n && n) {
    	memset(vetor, 0, sizeof(vetor));
    	memset(aux, 'x', sizeof(aux));
	
            for (int i = 0; i < n; i++) {
				cin >> vetor[i];
            }
            
            for(int i = 0; i < n; i++){
				cin >> aux[i];
			}

			stack <char> pilha;
			int cont = 0;
            int atual = 0;
			int ind = 0;
			
            for (int i = 0; i < n; i++) {
            	 pilha.push(vetor[i]);
				 comandos[ind] = 'I';
				 ind++;
				 cont++;  	
				 
	            while (!pilha.empty() && aux[atual] == pilha.top()) {
                    atual++;
                    comandos[ind] = 'R';
                    ind++;
                    cont++;
                    pilha.pop();
                }
            }
            
			for(int i = 0; i < cont; i++){
				cout << comandos[i];
			}
			if(!pilha.empty()) cout << " " <<"Impossible" << endl; 
			else cout << endl;
					
    }
}
