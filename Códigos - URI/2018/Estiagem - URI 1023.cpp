#include <bits/stdc++.h>
#include <map>

using namespace std;

int main(){
	
	int n;
	while(scanf("%d", &n) && n){
		printf("\n");
		int tot_x = 0, tot_y = 0, x, y, t = 1;
		map<int, int> casas;
		
		for(int i = 0; i < n; i++){
			scanf("%d %d", &x, &y);
			tot_x+= x; tot_y+= y;
			
			pair<map<int, int>::iterator,bool> ret;
			ret = casas.insert(make_pair(y/x, x));
			
			if(!ret.second)
				casas[y/x] += x;
		}
		
		printf("Cidade# %d:\n", t);
		t++;
		
		map<int, int>::const_iterator end = casas.end();
		--end;
		
		for(map<int, int>::iterator it = casas.begin(); it != casas.end(); it++){
			if(it == end) printf("%d-%d\n", it->second, it->first);
			else printf("%d-%d ", it->second, it->first);
		}
	
		printf("Consumo medio: %.2f m3.\n", floor(100 * (float)tot_y/tot_x) / 100);
	}
	
	return 0;
}