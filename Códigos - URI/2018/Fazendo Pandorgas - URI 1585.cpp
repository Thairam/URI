#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int area, x, y, n;
	
	scanf("%d", &n);
	
	while(n--){
		scanf("%d %d", &x, &y);
		area = (x * y) / 2;
		printf("%d cm2\n", area);
	}
	
	return 0;
}
