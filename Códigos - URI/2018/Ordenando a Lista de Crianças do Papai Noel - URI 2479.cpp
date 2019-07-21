#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	char c;
	string str;
	int comports = 0, not_comports = 0;
	vector<string> nomes;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		
		cin >> c >> str;
		nomes.push_back(str);
		
		if(c == '+'){
			comports++;
		}else
			not_comports++;
	}
	sort(nomes.begin(), nomes.end());
	
	for(int i = 0; i < n; i++){
		cout<<nomes.at(i)<<endl;
	}
	printf("Se comportaram: %d | Nao se comportaram: %d\n", comports, not_comports);
	
	return 0;
}
