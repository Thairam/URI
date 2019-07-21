#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	while(scanf("%d", &n) != EOF){
		int v[n + 2];
		
		for(int i = 1; i <= n; i++)
			scanf("%d", &v[i]);

		int dig, pos = 0; cin >> dig;
		
		for(int i = 1; i <= n; i++){
			if(v[i] == dig){
				pos = i;
				break;
			}
		}
					
		int salto = 2;
		
		if(pos == 1) printf("Y\n");
		else if(pos % salto == 0) printf("N\n");
			  		
		else{
			pos = pos - (pos/salto);
			
			bool sorte = true;
			for(int i = 3; i <= pos; i++){
				if(pos % i == 0){
					printf("N\n");
					sorte = false;
					break;
				}
				pos-= (pos / i);
			}
			if(sorte == true)
				printf("Y\n");
		}
	}
			
	return 0;
}