
#include <bits/stdc++.h>

using namespace std;

int main (){
	int n, a,b;
	
	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	
	if(n >= (a+b)){
		printf("Farei hoje!\n");
	} else {
		printf("Deixa para amanha!\n");
	} 	
	return 0;
}
