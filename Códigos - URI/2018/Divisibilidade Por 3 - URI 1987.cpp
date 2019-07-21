#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	long long m;

	
	while(cin >> n >> m){
		
		int soma = 0;
		while(m){
			
		soma+= m%10;
		m/=10;
		
		}
		cout << soma << ' ' << (soma%3 == 0 ? "sim\n" : "nao\n");
	}
	
	return 0;
}