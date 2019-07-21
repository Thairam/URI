#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){
	
	int n;
	
	cin >> n; cin.ignore();
	
	while(n--){
		set<char> pal;
		
		string s;
		getline(cin, s);
		
		for(int i = 0; i < s.size(); i++){
			if(s[i] > 96 && s[i] < 123)
				pal.insert(s[i]);
		}
		
		if(pal.size() == 26){
			cout << "frase completa" << endl;
		}
		else{
			if(pal.size() > 13)
				cout << "frase quase completa" << endl; 
			else 
				cout << "frase mal elaborada" << endl;
		}
	}
	
	return 0;
}