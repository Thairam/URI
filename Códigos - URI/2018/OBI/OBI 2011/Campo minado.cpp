#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int v[n + 1], res[n + 1];
	v[0] = v[n] = v[n + 1] = 0;
	
	for(int i = 1; i <= n; i++)
		scanf("%d", v + i);
	
	for(int i = 1; i <= n; i++)
		cout << v[i - 1] + v[i] + v[i + 1] << endl;
		
		
	return 0;
}