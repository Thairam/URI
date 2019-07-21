#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main(){
	
	deque<int> fila;
	
	int n, x;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		fila.push_back(x);
	}
	
	int m, y;
	cin >> m;
	deque<int>::iterator it;
	
	for(int i = 0; i < m; i++){
		cin >> y;
		it = fila.begin();
		while(it != fila.end()){
			if(*it == y){
				fila.erase(it);
				break;
			}else 
				it++;
		}
	}
	
	it = fila.begin();
	
	while(it != fila.end()){
		cout << *it;
		it++;
		if(it != fila.end())
			cout << " ";
	}
	cout << endl;
	
	return 0;
}