#include <bits/stdc++.h>
#include <map>

using namespace std;

int main(){
	
	int n, m;
	map<string, string>letters;
	
	scanf("%d", &n);
	cin.ignore();	
	for(int i = 1; i <= n; i++){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		letters[s1] = s2;
	}

	scanf("\n%d", &m);
	cin.ignore();	
	for(int i = 1; i <= m; i++){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		
		cout << s1 << endl;
		cout << letters[s2] << endl;
		cout << endl;
	}
	
	return 0;
}