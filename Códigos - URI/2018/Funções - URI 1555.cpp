#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int r, b, c, x, y;	
	int n;
	
	scanf("%d", &n);
	
	while(n--){
		scanf("%lld %lld", &x, &y);
			r = pow((3*x),2) + pow(y,2);
			b = ( (2 * (pow(x,2))) + pow((5*y),2) );
			c = ( (-100 * x) + pow(y,3) );
			
			if(r > b && r > c){
				printf("Rafael ganhou\n");
			} else if(b > r && b > c){
				printf("Beto ganhou\n");
			} else
				printf("Carlos ganhou\n");
	}
		
	return 0;
}
