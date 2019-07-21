#include <bits/stdc++.h>

using namespace std;

int main(){
	int q, d, p;
	int pag;
	
	while(cin >> q && q){
		scanf("%d %d", &d, &p);
		pag = ((d * p * q) / (p - q));
		printf("%d pagina", pag);
		if(pag != 1)
			printf("s");
			printf("\n");
	}
	
	return 0;
}
