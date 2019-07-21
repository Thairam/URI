#include <bits/stdc++.h>

using namespace std;

int main(){

	string s1, s2;
		
	cin >> s1 >> s2;
	
	if(s1 == "norte"){
		if(s2 == "norte") cout << "0" << endl;
		else if(s2 == "sul") cout << "180" << endl;
		else cout << "90" << endl;
	}
	else if(s1 == "leste"){
		if(s2 == "leste") cout << "0" << endl;
		else if(s2 == "oeste") cout << "180" << endl;
		else cout << "90" << endl;		
	}
	else if(s1 == "sul"){
		if(s2 == "sul") cout << "0" << endl;
		else if(s2 == "norte") cout << "180" << endl;
		else cout << "90" << endl;		
	}
	else{
		if(s2 == "oeste") cout << "0" << endl;
		else if(s2 == "leste") cout << "180" << endl;
		else cout << "90" << endl;		
	}
	
	return 0;
}