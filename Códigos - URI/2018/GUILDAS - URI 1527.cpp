#include <bits/stdc++.h>

int pontos[100000];
int s_Pontos[100000];
int vitorias[100000];
int guilda;

int busca(int v){
	if(pontos[v] == v) return v;
	return pontos[v] = busca(pontos[v]);
}

bool uniao(int a, int b){
	int x = busca(a);
	int y = busca(b);
	if(x == y) return false;
	
	pontos[y] = x;
	s_Pontos[x] += s_Pontos[y];
	vitorias[x] += vitorias[y];
	
	if(guilda == y) guilda = x;
}

using namespace std;

int main(){
	
	int n, m;
	
	while(cin >> n >> m, n | m){
		
		memset(vitorias, 0, sizeof(vitorias));
		
		int rafael = 0;
		guilda = 1;
		
		for(int i = 1; i <= n; i++){	
			cin >> s_Pontos[i];
			pontos[i] = i;
		}
		
		for(int i = 0; i < m; i++){
			int q, a, b;
			cin >> q >> a >> b;
			
			if(q == 1) uniao(a, b);
			else {
				int ba = busca(a);
				int bb = busca(b);
				
				if(s_Pontos[ba] > s_Pontos[bb]){
					vitorias[ba]++;
					if(guilda == ba) rafael++;
				}
				if(s_Pontos[ba] < s_Pontos[bb]){
					vitorias[bb]++;
					if(guilda == bb) rafael++;
				}	 			
			}
		}
		
		cout << rafael << endl;
	}
	
}