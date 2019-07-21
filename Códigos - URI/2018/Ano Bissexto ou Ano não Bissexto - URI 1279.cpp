#include <bits/stdc++.h>

using namespace std;

// verifica se um número de até 1000 digitos é divisivel por div
bool verifica(string &s, int div){
	int c = 0;
	
	for(int i = 0; i < s.size(); i++)
		c = (c * 10 + s[i] - '0') % div;
	
	return c == 0;
}

int main(){
	
	string s;
	
	bool flag = true;
	while(cin >> s){
		int bis = 0, hulu = 0, bulu = 0;
		
		if(verifica(s, 4) && !verifica(s, 100) || verifica(s, 400))
			bis = 1;
		if(verifica(s, 15)) 
			hulu = 1;
		if(verifica(s, 55) && bis)
			bulu = 1;
		
		if(flag == false)
			cout << endl;
		
		flag = false;
		
		if(!bis && !hulu && !bulu)
			cout << "This is an ordinary year." << endl;
		else{
			if(bis)
				cout << "This is leap year." << endl;
			if(hulu)
				cout << "This is huluculu festival year." << endl;
			if(bulu)
				cout << "This is bulukulu festival year." << endl;
		}
	}
	
	return 0;
}