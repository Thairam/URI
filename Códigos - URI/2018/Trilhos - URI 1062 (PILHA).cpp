#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main () {
	
    int n, vetor[100000];

    while (cin>> n && n) {
    	
    	// enquanto a primeira posição do vetor for diferente de 0
        while (cin >> vetor[0] && vetor[0]) {
        	
            for (int i = 1; i < n; i++) {
                cin >> vetor[i];
            }

			stack <int> pilha;
            int atual = 0;

            for (int i = 1; i <= n; i++) {
                pilha.push(i); // insere elementos na pilha

				/* enquanto houver elementos na pilha, e o vetor na posição atual for igual
				 ao elemento do topo, incrementa atual e limpa a pilha */
                while (!pilha.empty() && vetor[atual] == pilha.top()) {
                    atual++;
                    pilha.pop();
                }
            }
            
            // caso não sobre elemento na pilha, foi possível organizar os vagões.
			cout << (pilha.empty()? "Yes" : "No") << endl;		
        }
        cout << endl;
    }
}
