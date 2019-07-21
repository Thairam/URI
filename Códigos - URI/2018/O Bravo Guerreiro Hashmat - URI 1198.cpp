#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int v, t;
	
	while(scanf("%lld %lld", &v, &t) != EOF){
		if(v > t){
			printf("%lld\n", v-t);
		} else 
			printf("%lld\n", t - v);
	}
	
	return 0;
}
