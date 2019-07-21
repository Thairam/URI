#include <bits/stdc++.h>

using namespace std;

char mapa[101][101];
int l, c;

bool valida(int x, int y){
	if(x >= 0 && x < l && y >=0 && y < c) return true;
	
	return false;
}

int main(){
	
	
	cin >> c >> l;
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			cin >> mapa[i][j];
		}
	}

	int x = 0, y = 0;
	// Enquanto a posição for válida, diferente de '*' e não tiver sido verificada
	while(valida(x, y) && mapa[x][y] != '*' && mapa[x][y] != 'X'){
		
		char op = mapa[x][y];
		mapa[x][y] = 'X';
		
		if(op == '^'){
			x--;
			while(valida(x,y) && mapa[x][y] == '.') x--;
		}
		else if(op == '>'){
			y++;
			while(valida(x,y) && mapa[x][y] == '.') y++;
		}
		else if(op == 'v'){
			x++;
			while(valida(x, y) && mapa[x][y] == '.') x++;
		}
		else if(op == '<'){
			y--;
			while(valida(x, y) && mapa[x][y] == '.') y--;
		}
	}
	
	if(valida(x, y) && mapa[x][y] == '*') cout << "*" << endl;
	else cout << "!" << endl;
	
	
	return 0;
}