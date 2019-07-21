#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	int l, c, res = 0;
	
	for(int i = 0; i < n; i++){
		cin >> l >> c;
		
		if(l > c) res+= c;
	}
	
	cout << res << endl;
	
	return 0;
}