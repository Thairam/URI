#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char alfabeto[26];
	string entrada;
	string crip;
	
	for(int i = 0; i < 26; i++)
		alfabeto[i] = i + 'a';
	
	cin >> entrada >> crip;
	
	for(int i = 0; i < crip.size(); i++){
		for(int j = 0; j < entrada.size(); j++){
			if(crip[i] == entrada[j]){
				cout << alfabeto[j];
			}
		}
	}
	cout << endl;
	
	return 0;
}