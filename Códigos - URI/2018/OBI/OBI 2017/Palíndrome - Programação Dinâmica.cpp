#include <bits/stdc++.h>
#define MAX 2005

using namespace std;

int m_pal[MAX][MAX];
int parts[MAX];


bool is_pal(int a, int b){
	return m_pal[a][b];
}

void palindromos(string s, int n){

	memset(m_pal, 0, sizeof m_pal);	
	// coluna principal com 1
	for(int i = 0; i < n; i++){
		m_pal[i][i] = 1;
	}
	
	// intervalo de dois caracteres
	for(int i = 0; i < n; i++){
		if(s[i] == s[i + 1]){
			m_pal[i][i + 1] = 1;
		}
	}
	// intervalos maiores que 2
	for(int j = 2; j < n; j++){
		for(int i = 0; (i + j) < n; i++){
			
			if(s[i] == s[(i + j)] && is_pal(i + 1, (i + j) - 1))
				m_pal[i][(i + j)] = 1;
		}
	}	
}
	
int count_pal(int j){
	if(j < 0) return 0;
	
	if(parts[j]) return parts[j];
	
	if(is_pal(0, j))
		return parts[j] = 1;
	
	parts[j] = j;
	
	for(int i = j; i > 0; i--){
		if(is_pal(i, j)){
			parts[j] = min(parts[j], count_pal(i-1));
		}
	}
	
	return ++parts[j];
}


int main(){
	
	string s;
	int n;
	
	int i = 1;
	
	while(cin >> n && n){
		
		cin >> s;
		
		palindromos(s, n);
		
		printf("Teste %d\n", i++);
		cout << count_pal(n - 1) << endl;
		cout << endl; 
		memset(parts, 0 , sizeof parts);  	
	}
	
	return 0;
}