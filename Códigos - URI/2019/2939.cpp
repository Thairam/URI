#include <bits/stdc++.h>
#define MOD 1000000007
#define lld long long int

using namespace std;

lld solve(int n){
	if(n == 1) return 2;
	
	lld v1 = 2, v2 = 16;

	for(lld i = 3; i <= n; i++){
		lld v = (2*i) % MOD;
		
		v = ((v)*(v2 + (2*v1*(i-1))%MOD))%MOD;
		v1 = v2;
		v2 = v;
	}
	
	return v2;
}

int main(){
	int n;
	scanf("%d", &n);	   
	printf("%d\n", solve(n));	
	
	return 0;
}