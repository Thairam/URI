#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int x = 0;
	string s;
	int maior = 0;
	vector<string> v(51);
	
	
	while(cin>>n&&n){
		if(n == 0) break;
	
		for(int i = 0; i < n; i++){
			cin >> s;
			v[i] = s;
			if(s.length() > maior)
				maior = s.length();	
		}
						
		if(x!= 0)
			cout << endl;
		else
			x = 1;	
		
		for(int i = 0; i < n; i++){
			cout << setw(maior) <<v[i];
			printf("\n");
		}
		maior = 0;
	}
	
	return 0;
}
