#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n, maior = 0;;
	
	while(cin >> n && n){
		maior = max(maior, n);
	}
	
	cout << maior << endl;
	
	return 0;
}