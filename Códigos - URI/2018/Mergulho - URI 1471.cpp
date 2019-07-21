#include <bits/stdc++.h>

using namespace std;

int main(){   	
	
	int n, r;
	
	while(cin >> n >> r){
		

		int vetor[n + 1];
		memset(vetor, 0, sizeof(vetor));
		int x;
		
		for(int i = 0; i < r; i++){
			scanf("%d", &x);
			vetor[x] = 1;
		}
		
		if(n == r){
			cout << "*" << endl;
		} else {
		
		for(int i = 1; i <= n; i++){
			if(vetor[i] == 0){
				cout << i << " ";
			}
		}
		
		cout << endl;
		
		}		
	}
	
	return 0;
}