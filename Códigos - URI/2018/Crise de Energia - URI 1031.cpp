#include <bits/stdc++.h>
#include <vector>

using namespace std;

int search_jump(int n, int y){
	vector<int> cities;
	for(int i = 1; i <= n; i++){
		cities.push_back(i);
	}
	
	int pulo = 0;
	
	if(cities.size() > 1){
		do{
			cities.erase(cities.begin()+ pulo);
			pulo = (pulo - 1 + y) % cities.size();
		
		}while(cities.size() > 1); 	
	}
	return (cities[0] == 13);
}

int main(){
	int n;
	
	while(cin >> n && n){
		int salto = 1;
		while(search_jump(n,salto) == 0)
		salto ++;
		
		cout << salto << endl;
		
	}
	return 0;
}
