#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b, c, m, r;
	
	while(cin >> a >> b >> c){
		if( (a+b+c) == 0) break;
		
		m = a * b * c;
		r = (int) cbrt(m);
		printf("%d\n", r);
	}
	
	return 0;
}
