#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string vetor[10005];
	
	while(scanf("%d", &n) != EOF){
	
		for(int i = 0; i < n; i++){
			cin >> vetor[i];
		}
	
		sort(vetor, vetor + n);
	
		for(int i = 0; i < n; i++){
			cout << vetor[i] << endl;
		}
	}
	
	return 0;
}
