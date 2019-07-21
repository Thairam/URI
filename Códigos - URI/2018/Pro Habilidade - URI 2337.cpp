#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int fib(int n){
	int f[n + 1];
	f[0] = 0; f[1] = 1;
	
	for(int i = 2; i <= n; i++){
		f[i] = f[i - 2] + f[i - 1];
	}
	
	return f[n];
}

int main(){
	
	int n;
	while(scanf("%d", &n) != EOF){
		lli a = fib(n + 2);
		lli b = pow(2, n);
		
		lli m = abs(__gcd(a,b));
		lli A = a/m;
		lli B = b/m;
		
		printf("%lld/%lld\n", A, B);
		
	}
	
	return 0;
}