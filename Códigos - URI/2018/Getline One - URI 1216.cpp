#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	char str[100];
	int cont, soma;
	float media;
	soma = 0;
	cont = 0;
	while(gets(str), scanf("%d", &n) != EOF){
		soma+= n;
		cont++;
	}
	printf("%.1f\n", (float)soma/cont);
	
	return 0;
}
