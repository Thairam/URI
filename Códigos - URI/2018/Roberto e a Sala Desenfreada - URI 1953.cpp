#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	string mat, curso;
	
	while(scanf("%d", &n) != EOF){
		
		int epr = 0, ehd = 0, intrusos = 0;	
		
		while(n--){
			cin >> mat;
			cin >> curso;
			if(curso == "EPR"){
				epr++;
			}else if(curso == "EHD"){
				ehd++;
			}else {
				intrusos++;
			}				
		}
		printf("EPR: %d\n", epr);
		printf("EHD: %d\n", ehd);
		printf("INTRUSOS: %d\n", intrusos);	
	}
	
	return 0;
}