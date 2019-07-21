#include <bits/stdc++.h>
#include <queue>
#include <stack>

using namespace std;

int main(){
	
	static int testes = 3;
	int n, x, y;
	bool s, f, f_p;
	bool vetor[3];
	
	while(scanf("%d", &n) != EOF){
		
		stack<int> pilha;
		queue<int> fila;
		priority_queue<int> fila_p;
		s = f = f_p = true;
		
		while(n--){
			
			cin >> x >> y;
			
			if(x == 1){
				pilha.push(y);
				fila.push(y);
				fila_p.push(y);
				
			}else {
				if( pilha.top() != y ) s = false;
				if( fila.front() != y )	f = false;
				if(fila_p.top() != y) f_p = false;
				
				pilha.pop(); fila.pop(); fila_p.pop();
			}
		}
		
		vetor[0] = s; vetor[1] = f; vetor[2] = f_p;
		
		int cont = 0;
		
		for(int i = 0; i < testes; i++){
			if(vetor[i] == true){
				cont++;
			}
		}
		
		if(cont > 1) cout << "not sure" << endl;
		else if(f_p && !f && !s) cout <<"priority queue" << endl;
		else if(!f_p && f && !s) cout <<"queue" << endl;
		else if(!f_p && !f && s) cout <<"stack" << endl;
		else cout <<"impossible" << endl;
	}
	
	return 0;
}