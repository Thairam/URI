#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x, n, q;
	while(1){
	scanf("%d", &n);
	if(n == 0) break;
	int cont1 = 0, cont2= 0;
	while(n--){
		scanf("%d", &x);
		if(x == 0) cont1++;
		if(x == 1) cont2++;
	}
	printf("Mary won %d times and John won %d times\n", cont1, cont2);
	}
		
	return 0;
}
