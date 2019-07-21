#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x1, y1, r1, x2, y2, r2;
	
	while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
		// distância entre dois pontos
		float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		
		cout << (r1 >= dist + r2 ? "RICO" : "MORTO") << endl;
	}
	
	
	return 0;
}