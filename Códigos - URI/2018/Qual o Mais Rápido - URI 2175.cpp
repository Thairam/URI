#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double o, b, i;
	
	scanf("%lf %lf %lf", &o, &b, &i);
	
	if(o == b || o == i || b == i){
		printf("Empate\n");
	}else if(o < b && o < i){
		printf("Otavio\n");
	}else if(b < o && b  < i){
		printf("Bruno\n");
	}else{
		printf("Ian\n");
	}
	
	return 0;
}
