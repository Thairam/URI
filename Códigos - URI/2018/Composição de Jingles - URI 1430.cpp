#include <bits/stdc++.h>
#include <map>

using namespace std;

map<char, double> notas;

void compor(){
	notas['W'] = 1.0;
	notas['H'] = 0.5;
	notas['Q'] = 0.25;
	notas['E'] = 0.125;
	notas['S'] = 0.0625;
	notas['T'] = 0.03125;
	notas['X'] = 0.015625;
}

int contar(string s){
	double soma = 0;
	for(int i = 0; i < s.size(); i++)
		soma+= notas[s[i]];
	
	return (soma == 1.0 ? 1 : 0);
}

int res(string s){
	
	int cont = 0;
	string aux = "";
	for(int i = 1; i < s.size(); i++){
		if(s[i] != '/')
			aux+= s[i];
		else{
			cont+= contar(aux);
			aux = "";
		}
	}
	
	return cont;
}


int main(){

	compor();
			
	string s;
	while(cin >> s && s != "*"){
		cout << res(s) << endl;	
	}
	
	return 0;
}