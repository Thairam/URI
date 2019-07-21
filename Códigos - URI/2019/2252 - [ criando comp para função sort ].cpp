#include <bits/stdc++.h>
#define pid pair<int, double>
#define vpid vector<pid>

using namespace std;

bool cond(pid a, pid b){
	return (a.second > b.second);
}

int main(){
	
	int n, t = 1;
	while(scanf("%d", &n) != EOF){
		vpid v(10);
		
		double x;
		for(int i = 0; i < 10; i++){
			scanf("%lf", &x);
			v[i] = pid(i, x);
		}
		
		sort(v.begin(), v.end(), cond);
		
		printf("Caso %d: ", t++);
		
		for(int i = 0; i < n; i++){
			printf("%d", v[i].first);
		}
		
		printf("\n");
		
	}
	
	return 0;
}