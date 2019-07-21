#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m;
	char pe;
	int e[61], d[61];
	
		memset(e, 0 , sizeof(e));
		memset(d, 0 , sizeof(d));
	
		for(int i = 0; i < n; i++){
			cin >> m >> pe;
			
			if(pe == 'D'){
				d[m]++;
			}
			else if(pe == 'E'){
				e[m]++;
			}	
		}
		
		int total = 0;
		for(int i = 30; i<= 60; i++){
			if(e[i] <= d[i]) total+= e[i];
			else total+= d[i];
		}
		
		cout << total << endl;
	
	return 0;
}
