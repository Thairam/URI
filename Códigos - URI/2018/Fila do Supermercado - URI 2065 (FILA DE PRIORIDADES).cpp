#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main(){
	
	int n, m;
	int vetor[10005];
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> vetor[i];
	}
	
	int result = 0;
	
	/* A fila de prioridade ir� determinar
	 o funcion�rio livre com menor tempo de execu��o e o seu identificador
	 */
	priority_queue< pair<int, int> > fila;
	
	for(int i = 1; i <= n; i++){
		/* Como o desempate � para o menor id, ent�o utiliza-se o -i porque por padr�o a fila de 
           prioridade � para o maior
		*/
		fila.push(make_pair(0, -i));
	}
	
	while(m--){
		
		int c;
		cin >> c;
		int id = -fila.top().second; // id do funcionario
		int livre = -fila.top().first; // quando o funcion�rio est� livre
		fila.pop();
		fila.push( make_pair( -(livre + vetor[id] * c), -id ) ); // Funcion�rio livre novamente
		result = max(result, livre + vetor[id] * c);
	}
	
	cout << result << endl;
	
	return 0;
}