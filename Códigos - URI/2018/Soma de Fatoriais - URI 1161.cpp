#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int f1, f2, m, n, i, j;
	
	f1 = 1;
	f2 = 1;
	
	while(scanf("%lld %lld", &m, &n) != EOF){
		for(i = 1; i <= m; i++){
			f1 *= i;		
		}
		for(j = 1; j <= n; j++){
			f2 *= j;
		}
		printf("%lld\n", f1+f2);
		
		f1 = 1;
		f2 = 1;
	}
	
	return 0;
}
