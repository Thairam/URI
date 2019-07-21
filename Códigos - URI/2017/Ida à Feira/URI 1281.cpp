#include <bits/stdc++.h>
#include <map>
#include <string>

using namespace std;

int main(){
	
	map<string, double> mapa;
	map<string, double> mapa1;
	int n;
	scanf("%d", &n);
	while(n--){
		int m;
		string s;
		double valor;
		scanf("%d", &m);
		for(int i = 0; i < m; i++){
			cin >> s;
			scanf("%lf", &valor);
			mapa[s] = valor;	
		}
		int p;
		int v;
		double soma = 0;
		scanf("%d", &p);
		for(int i = 0; i < p; i++){
			cin >> s;
			scanf("%d", &v);
			mapa1[s] = mapa[s] * v;
			soma+= mapa1[s];		
		}
		printf("R$ %.2lf\n", soma);
	}
	
	return 0;
}
