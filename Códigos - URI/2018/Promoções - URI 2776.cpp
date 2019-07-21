#include <bits/stdc++.h>

using namespace std;

int total[2001];

void computa(int q, int v, int m){
	int j = 1;
	for(int i = q; i <= m; i+=q, j++){
		if(v > total[i]) total[i] = v*j;
	}
}

int getMaior(int m, int menor){
	
	if(menor > m) return 0;
	int k;
	
	total[2] = max( (total[1] * 2), total[2]);
	
	for(int i = 3; i <= m; i++){	
		for(int j = 1, k = i; j <= (i / 2); j++, k--){	
			total[i] = max( (total[k - 1] + total[j]), total[i] );   	
		}
	}
	if(total[m] <= 0) return 0;
	return total[m];
}



int main(){
	
	int n, m;
	int q, v;
		
	while(scanf("%d %d", &n, &m) != EOF){
		
		memset(total, -10000, sizeof total);
		int menor = m + 1;
		
		for(int i = 0; i < n; i++){
			cin >> q >> v;
			if(q < menor)
				menor = q;

			computa(q, v, m);	
		}
		cout << getMaior(m, menor) << endl;			
	}
	
	return 0;
}