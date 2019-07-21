#include <bits/stdc++.h>
#include <vector>

using namespace std;

typedef struct ponto{
	int x;
	int y;
};

bool verifica(int x1, int y1, int x2, int y2, int x3, int y3){
	int resultado = 0;
	
	resultado = ( (x1 *(y2 - y3)) - (y1 *(x2 - x3)) + ((x2*y3) - (y2*x3)) );
	
	if(resultado < 0) return true;
	
	return false;
}

bool operator < (const ponto& p1, const ponto &p2){
	 if(p1.y < p2.y) return true;
	 if(p1.y == p2.y && p1.x < p2.x) return true;

     else return false;
	 
}

int main(){
	
	ponto p;
	int n, a, b;
	
	cin >> n >> a >> b;
	
	vector<ponto> vetor;
	int resultados[n];
	
	
	for(int i = 0; i < n; i++){
		cin >> p.x >> p.y;
		vetor.push_back(p);
		
		resultados[i] = 1;
	}
	
	sort(vetor.begin(), vetor.end());
	
	int maior = resultados[0];
	
	for(int i = 0; i < n - 1; i++){

		ponto p_atual;	
		p_atual = vetor[i + 1];
		
		for(int j = i; j >= 0; j--){
			if( verifica(p_atual.x, p_atual.y, vetor[j].x, vetor[j].y, a, 0)){
                if(verifica(vetor[j].x, vetor[j].y, p_atual.x, p_atual.y, b, 0) ){
				   resultados[i + 1] = max( (resultados[j] + 1), resultados[i + 1] );
			   }
			}
		}		
		if(resultados[i + 1] > maior) maior = resultados[i + 1];
	}	

	cout << maior << endl;
	
	return 0;
}