#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, c, n;
	char b;
	
	scanf("%d", &n);
	
	while(n--){
		scanf("%d %c %d", &a, &b, &c);
		if(a == c) printf("%d\n", a*c);
		else if(b >= 65 && b <= 90)
			printf("%d\n", c-a);
		 else 
			printf("%d\n", a+c);
				
	}	
		
	return 0;
}
