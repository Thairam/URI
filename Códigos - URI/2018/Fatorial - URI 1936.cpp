#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int fat[9];
	fat[0] = 1;
	
	for(int i = 1; i < 9; i++){
		fat[i] = i * fat[i - 1];
	}
	

	int n, result = 0;
	
	cin >> n;
	
	for(int i = 8; i > 0; i--){
		result += n / fat[i];
		n = n % fat[i];
	}
	
	cout << result << endl;	 
	
	return 0;
}