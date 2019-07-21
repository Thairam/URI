#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y;
	char c;
	scanf("%d", &n);
	
	while(n--){
		scanf("%d %c %d", &x, &c, &y);
		if(x == y){
			for(int i = 5; i <= 10; i++){
				printf("%d x %d = %d\n", x, i, (x*i));
			}
		} else {
			for(int j = 5; j <= 10; j++){
				printf("%d x %d = %d && %d x %d = %d\n", x, j, (x*j), y, j, (y*j) );
			}
		}
		
	}
		
	return 0;
}
