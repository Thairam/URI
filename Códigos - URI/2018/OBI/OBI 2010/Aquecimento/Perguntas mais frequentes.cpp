#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;
	
	while(cin >> n >> k && n + k){
		int p[105];
		memset(p, 0, sizeof p);
		int x;
		
		for(int i = 0; i < n; i++){
			cin >> x;
			
			p[x]++;
		}
		
		int cont = 0;

		for(int i = 1; i <= 100; i++){
			if(p[i] >= k) cont++;
		}		
	
		cout << cont << endl;		   	
	}
	
	return 0;
}