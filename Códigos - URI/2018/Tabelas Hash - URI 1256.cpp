#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int flag = 1;
	
	cin >> n;
	
	int m, c;
	
	
	while(n--){
	
		cin >> m >> c;
		
		vector<vector<int> > table(m);
		
		int x;
			
		for(int i = 0; i < c; i++){
			cin >> x;
			table[x%m].push_back(x);

		}
		
		if(!flag) cout << endl;
		flag = 0;
	
		for(int i = 0; i < m; i++){		
			cout << i;
			
			for(int j = 0; j < table[i].size(); j++){
				cout << " ->";
				cout << ' ' << table[i][j];
			}
			cout << " -> \\" << endl;
		}
		
	}
	
	return 0;
}