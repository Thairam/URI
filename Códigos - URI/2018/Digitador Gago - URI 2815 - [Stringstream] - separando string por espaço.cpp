#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s, aux;
	getline(cin, s);
	stringstream f(s); //joga a string s dentro da stream f, já separado por espaço
	
	bool esp = false;

	//jogando cada elemento da stream f dentro de aux, um por um
	while(f >> aux){
			
		if(esp) cout << " ";
		if(aux.size() <= 3)
			cout << aux;
		else{
			if(aux[0] == aux[2] && aux[1] == aux[3]){
				for(int i = 2; i < aux.size(); i++){
					cout << aux[i];
				}
			}
			else cout << aux;
		}
		esp = true;
	}
	
	cout << endl;
	
	return 0;
}