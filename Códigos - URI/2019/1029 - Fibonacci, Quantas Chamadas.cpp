#include <bits/stdc++.h>

using namespace std;

int fib[40];
int calls_fib[40];

void calc_fib(){
	fib[0] = calls_fib[0] = calls_fib[1] = 0;
	fib[1] = 1;
	
	for(int i = 2; i <= 39; i++){
		fib[i] = fib[i-1] + fib[i-2];
		calls_fib[i] = (calls_fib[i-1] + 1) + (calls_fib[i-2] + 1); 
	}
}


int main(){
	calc_fib();
	int n, x;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);
		printf("fib(%d) = %d calls = %d\n", x, calls_fib[x], fib[x]);
	}
		
	return 0;
}