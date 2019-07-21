#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int frango, bife, massa;
	int q1, q2, q3;
	int falta = 0;
	
	scanf("%d %d %d", &frango, &bife, &massa);
	scanf("%d %d %d", &q1, &q2, &q3);
	
	if(frango <= q1) falta += q1 - frango;
	
	if(bife <= q2) falta += q2 - bife;
	
	if(massa <= q3) falta += q3 - massa; 
		
		
	cout << falta << endl;
	
	
	return 0;
}