#include <bits/stdc++.h>
#define MAX 100100

using namespace std;

int pai[MAX];
	
int busca(int p){
	return pai[p] == p? p : pai[p] = busca(pai[p]);
}

int main(){
	
	int n, k;
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		pai[i] = i;
	}
	
	for(int i = 0; i < k; i++){
	   	char op;
		int x, y;
		cin >> op >> x >> y;
		
		x = busca(x - 1);
		y = busca(y - 1);
		
		if(op == 'F') pai[x] = y;
		else cout << (x == y ? "S" : "N") << endl;
	}
		
	return 0;
}