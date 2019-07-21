#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, c;
	vector<int> v;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &c);
		v.push_back(c);
	}
		
	for(int i = n - 1; i > 0; i--){
		if(v[i - 1] >= v[i]){
			v.erase(v.begin() + i);
		}
	}
	
	printf("%d\n", v.size());
	
	return 0;
}