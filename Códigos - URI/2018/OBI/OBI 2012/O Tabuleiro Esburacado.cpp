#include <bits/stdc++.h>

using namespace std;

int grid[10][10];
int dx[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};


int main(){
	
	int n;

	grid[4][1] = grid[4][2] = grid[2][2] = grid[3][5] = 1;
	
	cin >> n;
	
	int res = 0, x;
	int px = 4, py = 4;
	bool ok = 1;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		if(ok)
			res++;
		if(grid[px + dx[x]][py + dy[x]])
			ok = 0;
		
		px += dx[x];
		py += dy[x];
	}
	
	cout << res << endl;

	return 0;
}