#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;
	string s[105];
	
	cin >> n >> k;

	for(int i = 0; i < n; i++){
		cin >> s[i];
	}

	sort(s, s + n);

	cout << s[k - 1] << endl;
		
	return 0;
}