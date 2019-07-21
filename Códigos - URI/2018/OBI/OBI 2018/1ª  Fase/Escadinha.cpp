#include <bits/stdc++.h>
#include <set>

using namespace std;

int v[1001];

int calcula(int n){
	
	int dif = v[0] - v[1], cont = 1;
	
	for(int i = 1; i < n - 1; i++){
		
		if(dif != v[i] - v[i + 1]){
			cont++;
		}
		
		dif = v[i] - v[i + 1];
				
	}
	
	return cont;
	
}

int main(){

	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	cout << calcula(n) << endl;
	
	return 0;
}