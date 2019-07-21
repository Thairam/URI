#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> aparicoes[1000010];

int main() {
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF){
		memset(aparicoes, 0, sizeof aparicoes);
		
		int x;
		for(int i = 1; i <= n; i++){
			scanf("%d", &x);
			aparicoes[x].push_back(i);
		}
		
		int k, v;
		for(int i = 0; i < m; i++){
			scanf("%d %d", &k, &v);
			k--;
			
			if(k < aparicoes[v].size())
				printf("%d\n", aparicoes[v][k]);
			else printf("0\n");
		}
	}
	
	return 0;
}