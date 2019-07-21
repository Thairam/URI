#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){
	
	int n;
	
	while(cin >> n){
		
		set<int> seen;
		vector<vector<int> >  arr(n, vector<int>(n));
		
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> arr[i][j];
				
				int x, y;
				
				for(int i = 0; i < 2*n; i++){
					cin >> x >> y;
					seen.insert(arr[x-1][y-1]);
				}
				cout << seen.size() << endl;
		}		
	
	return 0;
}
