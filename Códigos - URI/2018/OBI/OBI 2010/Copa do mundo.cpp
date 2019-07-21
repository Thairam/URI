#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char v[16];
	
	for(int i = 0; i < 16; i++)
		v[i] = i + 'A';
	
	int a, b;
	
	for(int k = 8; k > 0; k/= 2){
		for(int i = 0, j = 0; i < k; i++){
			cin >> a >> b;
			
			if(a > b){
				v[j] = v[2 * i];
			}
			else v[j] = v[2 * i + 1];
			
			j++;
		}
	}
	
	cout << v[0] << endl;
	
	return 0;
}