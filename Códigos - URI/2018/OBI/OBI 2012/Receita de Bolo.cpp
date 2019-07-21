#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int v[2];
	
	cin >> v[0] >> v[1] >> v[2];
	
	v[0] /= 2; v[1] /= 3; v[2] /= 5; 
	
	sort(v, v + 3);
	
	cout << v[0] << endl;
	
	return 0;
}