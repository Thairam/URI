#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	while(scanf("%d", &n)  != EOF ){
		int cont = 0;
		for(int i = n; i >=2; i=i/2){
			cont++;
		}
		printf("%d\n", cont);
	}
	
	return 0;
}
