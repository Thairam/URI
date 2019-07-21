#include <bits/stdc++.h>
#include <vector>

using namespace std;

/*
Laércio exigiu que Armandinho ordenasse uma lista de números, de forma que apenas os 
números ímpares aparecessem e o primeiro item seja o maior, o segundo seja o menor, 
o terceiro o segundo maior, o quarto seja o segundo menor e assim por diante. 
*/

int main(){
	
	int n;
	cin >> n;
	
	while(n--){
		int m;
		cin >> m;
		
		vector<int> v;
		int x;
		for(int i = 0; i < m; i++){
			cin >> x;
			
			if(x%2 != 0)
				v.push_back(x);
		}
		
		sort(v.begin(), v.end());

		for(int i = 0, j = v.size() - 1; j >= i && i <= j; i++, j--){
			if(i == j){
				cout << v[i];
				break;
			}
			cout << v[j] << " ";
			cout << v[i];
			if(i  + 1 != j) cout << " ";
		}
		cout<< endl;
	}
	
	return 0;
}