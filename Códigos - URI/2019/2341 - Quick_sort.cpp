#include <bits/stdc++.h>

using namespace std;

int compare(const void *a, const void *b){
	return ( *(int*)a - *(int*)b );
}

int main(){
	
	int n, k, x = 0;
	int v[1001] = {0};
	scanf("%d %d", &n, &k);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		v[x-1]++;
	}
	
	qsort(v, k, sizeof(int), compare);
	printf("%d\n", v[0]);
	return 0;
}