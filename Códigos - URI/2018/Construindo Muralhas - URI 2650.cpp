#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	
	int n, w;
	char nome[10000];
	
	cin >> n >> w;
	
	vector<string> v;
	int aux;
	
	for(int i = 0; i < n; i++){
		// Realiza a leitura até encontrar um número. (deixa um espaço no final da palavra)
		scanf(" %[^0-9]s", nome);
		scanf("%d", &aux);
		
		if(aux > w){
			char aux[10000] = "";
			for(int j = 0; j < strlen(nome) - 1; j++){
   	   	   	    aux[j] = nome[j];
			}
			v.push_back(aux);
		}
		
		
	}
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	
	
	return 0;
}