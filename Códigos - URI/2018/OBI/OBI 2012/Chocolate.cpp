#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int v[14] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384};
	
	int l, x;
	
	cin >> l;
	
	for(int i = 0; i < 14; i++){
		if(v[i] > l){
			x = v[i - 1];
			break;
		}
		else if(l == v[i]){
			x = v[i];
			break;
		}
	}
	
	int result = pow(x,2);
	
	cout << result << endl;

	return 0;
}