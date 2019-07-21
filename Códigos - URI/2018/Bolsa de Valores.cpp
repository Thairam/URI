#include <bits/stdc++.h>

using namespace std;

int v[200005];

int kadane(int n, int taxa){
	int max_atual, max_final, max_lucro = 0;
	
	max_atual = max_final = v[0];
	
	for(int i = 1; i < n; i++){
		
		if(max_atual > v[i] && (max_atual - v[i] >= taxa) || v[i] < max_final){
			max_lucro += max(0, max_atual - max_final - taxa);
			max_atual = max_final = v[i];
		}
		
		max_atual = max(max_atual, v[i]);
	}

	max_lucro += max(0, max_atual - max_final - taxa);
	
	return max_lucro;
}

int main(){
	
	int n, c;
	//cin >> n >> c;
	scanf("%d %d", &n, &c);
	
	for(int i = 0; i < n; i++)
		//cin >> v[i];
		scanf("%d", &v[i]);
	
	printf("%d\n", kadane(n, c));
	//cout << kadane(n, c) << endl;
	
	return 0;
}