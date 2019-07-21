#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int v[10];
	int pos, n, x, y, z;
	
	scanf("%d", &n);
	
	while(n--){
		
		scanf("%d %d", &x, &y);
		
		for(int i = 1; i <= x; i++){
			scanf("%d", &z);
			v[i] = z;
		}
		
		for(int i = 1; i <= x; i++){
			if(v[i] == y){
				pos = i;
				break;
			}else {
				int aux = 0;
				int t = 1;
				while(t!= 0){
					for(int j = 1; j <= x; j++){
						if(v[j] == y - aux || v[j] == y + aux){
							pos = j;
							t = 0;
							break; 
						}
					}
				aux++;
				}
			}
		}
		printf("%d\n", pos);
	}
	
	
	return 0;
}
