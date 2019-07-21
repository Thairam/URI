#include <bits/stdc++.h>

using namespace std;

void print(long long int n){
	if(n < 1000){
		printf("$%d", n);
		return ;
	}
		print(n/1000);
		printf(",");
		printf("%.3d", n%1000);
}

int main(){
	long long int x, y;
	
	while(cin >> x >> y){
		print(x);
		printf(".%.2d\n", y);
	}	
	return 0;
}
