#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, n, k;
	scanf("%d", &t);
	
	while(t--){
		
		scanf("%d %d", &n, &k);
		
		printf("%d\n", (n/k) + (n%k));
		
	}
	
	return 0;
}