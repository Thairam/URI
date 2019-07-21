#include <bits/stdc++.h>

using namespace std;

int main(){
	int l, r;
	
	while(scanf("%d %d", &l, &r)){
		if((l + r) == 0) break;
		
		printf("%d\n", l+r);
	}
	
	return 0;
}
