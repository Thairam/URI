#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	int res = y / (y - x);
	
	cout << (( y % (y - x) == 0) ? res : res + 1) << endl;
	
	return 0;
}