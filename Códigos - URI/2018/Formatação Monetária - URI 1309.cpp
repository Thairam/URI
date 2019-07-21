#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s1, s2;
	string formated;
	
	while(cin >> s1 >> s2){
		
		reverse(s1.begin(), s1.end());
		
		for(int i = 0; i < s1.size(); i++){
			if( (i%3) == 0 && i!= 0){
				formated.push_back(',');
			}
			formated.push_back(s1[i]);
		}
		
		reverse(formated.begin(), formated.end());
		cout << "$" << formated << '.';
		
		if(s2.size() < 2){
			cout<< "0";
		}
			cout << s2 << endl;
			formated.clear();
	}
	
	return 0;
}
