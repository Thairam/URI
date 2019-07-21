#include <bits/stdc++.h>
#define PI 3.1415
#define x 1.33333333333333

using namespace std;

int main(){
	
	int r, l, res = 0;
	cin >> r >> l;
	
	res = ((r*r*r) * PI) * x;
	
	cout << l / res << endl;
	
	return 0;
}