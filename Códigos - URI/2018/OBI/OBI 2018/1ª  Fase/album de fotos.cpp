#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){
	set<int> album;
	int n, m, x;
	
	cin >> n >> m;
	
	for(int i = 0; i < m; i++){
		cin >> x;
		album.insert(x);
	}
	
	cout << n - album.size() << endl;	
	
	
	return 0;
}