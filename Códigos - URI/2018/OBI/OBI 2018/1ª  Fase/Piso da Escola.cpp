#include <bits/stdc++.h>

using namespace std;

int main(){

	int l, c;
	int a, b;
	
	cin >> l >> c;
	a = (l * c) + ((l - 1) * (c - 1));
	b = (2 * (l - 1) + (2 * (c - 1)));
	
	cout << a << endl;
	cout << b << endl;
	

	return 0;
}
