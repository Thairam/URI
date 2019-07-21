#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int x;
	int v[10001];
	vector<int> lista;
	int flag = 0;
	
	while(scanf("%d", &n)){
		if(n == 0) break;
		
		for(int i = 1; i<= n; i++){
			scanf("%d", &x);
			v[i] = x;
			lista.push_back(x);
		}
		
		sort(lista.begin(), lista.end());

		for(int j = 1; j<= n; j++){
			if(lista.at(n-2) == v[j]){
				flag = j;
			}
		}
		printf("%d\n", flag);
		lista.clear();
	}
	
	return 0;
}
