#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, c;
	
	while(scanf("%d %d", &a, &c) && (a+c)){
		vector<int>posi(c);
		
		long long power = 0;
		for(int i = 0; i < c; i++){
			cin >> posi[i];
			
			if(i != 0){
				if(posi[i-1] > posi[i]){
					power += posi[i - 1] - posi[i];
				}
			}else
				power+= a - posi[i];		
		}
		cout << power << endl;
			
	}
	
	return 0;
}