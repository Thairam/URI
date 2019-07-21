#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	
	ll int l, n, result = 0;
	
	scanf("%lld %lld", &l, &n);
	
	result = ( (l - (n - 1)) * (l - (n - 1)) ) + (n - 1);
	
	printf("%lld\n", result);
	
	
	return 0;
}