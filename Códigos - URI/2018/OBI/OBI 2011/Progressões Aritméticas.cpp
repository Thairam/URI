#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int v[n];
	
	for(int i = 0; i < n; i++)
		cin >> v[i];

	int res = 1, r;
	bool flag = 1;
	
	for(int i = 1; i < n; i++){
		if(flag){
			r = v[i] - v[i - 1];
			flag = 0;
			continue;
		}
		if(v[i] - v[i - 1] != r){
			res++;
			flag = 1;
		}
	}
	
	cout << res << endl;
			
	return 0;
}