#include <bits/stdc++.h>

using namespace std;

int main (){
	int x, y, n, i;
	
	while(scanf("%d %d", &n, &i) != EOF){
	
	int cont = 0;
	
	while(n--){
		scanf("%d %d", &x, &y);
		if(x == i){
			if(y == 0) cont++;
		}
	}
	printf("%d\n", cont);
}
			
	return 0;
}
