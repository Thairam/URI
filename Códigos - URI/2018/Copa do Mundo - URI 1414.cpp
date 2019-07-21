#include <bits/stdc++.h>

using namespace std;

int main(){

	int t, n;
	string str;
	int points;
	int max_p, total;
	
	while(cin >> t >> n){
		if( (t + n) == 0) break;
		
		max_p = 3*n;
		total = 0;
		
		while(t--){
	       	cin >> str;
	       	scanf("%d", &points);
     		  total+= points;
		}
		printf("%d\n", max_p - total);
	}
		
	return 0;
}