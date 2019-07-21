#include <bits/stdc++.h>

using namespace std;

char alf[27];
char aux[27];

void alfabeto(){
	for(int i = 1; i <= 26; i++)
		alf[i] = 64 + i;
}

bool ok(int m){
	if(m < 2) return false;
	int cont = 0;
	for(int i = 1; i <= m; i++){
		if(aux[i] != alf[i]){
			cont++;
			if(aux[(aux[i] - 'A') + 1] != alf[i]) return false;
		}
		if(cont > 2) return false;
	}
	if(cont == 0) return false;
	
	return true;
}

int main(){
	alfabeto();
	
	int n, m;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &m);
		for(int i = 1; i <= m; i++)
			cin >> aux[i];
		
		cout << (ok(m) ? "There are the chance." : "There aren't the chance.") << endl;
	}	
	
	return 0;
}