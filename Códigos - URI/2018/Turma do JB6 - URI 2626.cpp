#include <bits/stdc++.h>

using namespace std;

string verifica(int d, int l, int p){
	
	if(d == 0){
		if(l == 2 && p == 2) return "dodo";		
		if(l == 1 && p == d) return "leo";
		if(p == 1 && l == d) return "pepper";
		return "empate";

	}
	else if(d == 1){
		if(l == 0 && p == 0) return "dodo";
		if(l == 2 && p == d) return "leo";
		if(p == 2 && l == d) return "pepper";
		return "empate";
		
	}
	else if(d == 2){
		if(l == 1 && p == 1) return "dodo";
		if(l == 0 && p == d) return "leo";
		if(p == 0 && l == d) return "pepper";
		return "empate";
		
	}
	
}

int main(){
	
	string s1, s2, s3;
	int dodo, leo, pepper;
	string op[3] = {"pedra", "papel", "tesoura"};
	
	
	while(cin >> s1 >> s2 >> s3){
		
		string result;
		
		for(int i = 0; i < 3; i++){
			if(op[i] == s1) dodo = i;
			if(op[i] == s2) leo = i;
			if(op[i] == s3) pepper = i;
		}
	
		result = verifica(dodo, leo, pepper);
		
		if(result == "dodo")
			cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
		else if(result == "leo")		
			cout <<  "Iron Maiden's gonna get you, no matter how far!" << endl;
		else if(result == "pepper")
			cout << "Urano perdeu algo muito precioso..." << endl;
		else cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
				
	}		
	
}