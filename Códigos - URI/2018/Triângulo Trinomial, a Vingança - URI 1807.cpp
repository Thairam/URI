#include <bits/stdc++.h>
#define lld long long int
#define mod ((1 << 31) - 1)

using namespace std;

lld exp(int x, int n){
	lld r = 1;
	lld power = x;
	
	while(n > 0){
		
		if(n%2 == 1)
			r = (r * power) % mod;
		
		n/= 2;
		power = (power*power)%mod;
	}
	
	return r;
	
}


int main(){
	
	lld r;
	scanf("%lld", &r);
	cout << exp(3, r) % mod << endl;	
			
	return 0;
}