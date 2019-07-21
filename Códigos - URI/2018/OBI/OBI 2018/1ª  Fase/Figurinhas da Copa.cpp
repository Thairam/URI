#include <bits/stdc++.h>

using namespace std;

bool carimbadas[301] = {false};
bool compradas[301] = {false};

int main(){

	int n, c, m;
	cin >> n >> c >> m;
	
	int x;
	
	for(int i = 0; i < c; i++){
		cin >> x;
		carimbadas[x] = true;	
	}
	
	for(int i = 0; i < m; i++){
		cin >> x;
		if(!compradas[x] && carimbadas[x])
			c--;
		compradas[x] = true;
	}
	
	cout << c << endl;
		
	return 0;
}
