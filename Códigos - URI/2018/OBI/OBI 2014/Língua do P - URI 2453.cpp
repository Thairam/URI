#include <bits/stdc++.h>

using namespace std;

bool v[10000000];

int main(){
		
		
	string s;
	
	getline(cin, s);
	
	for(int i = 1; i < s.size(); i++){
		
		if(s[i] == ' ') cout << s[i];
		
		else if(s[i] != 'p'){
			
			if(s[i - 1] == 'p'){
				cout << s[i];
			}
		}
		else {
			if((s[i - 1] == 'p' && v[i - 1] == false)){
				cout << s[i];
				v[i] = true;
			}
		} 		
	}
	cout << endl;
	
	return 0;
}