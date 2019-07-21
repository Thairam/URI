#include <bits/stdc++.h>

using namespace std;

int main(){
	int m;
	int n,c;
	
	
	while(scanf("%d", &m) != EOF){
		float x=0,y=0;
		float result=0;
		for(int i = 0; i < m; i++){
			scanf("%d %d", &n, &c);
			x+= (float)n*c;
			y+=(float)c;
		}
		y = (float)y*100;
		result = (float)x/y;
		printf("%.4f\n", (float)result); 
	}

	return 0;
}

