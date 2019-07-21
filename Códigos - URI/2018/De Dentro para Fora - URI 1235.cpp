#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, half;
	string line;

	cin >> t;
	getline(cin, line);
	
	while(t--) {
		getline(cin, line);

		half = line.size() / 2;
		// inverte todas as palavras na primeira metade da string, sem mudá-las de lugar
		reverse(line.begin(), line.begin() + half);
		//inverte as palavras da primeira metade trocando-as de lugar, e inverte a segunda metade
		reverse((line.begin() + half), line.end()); 
		
		cout << line << '\n';
	}
	return 0;
}
