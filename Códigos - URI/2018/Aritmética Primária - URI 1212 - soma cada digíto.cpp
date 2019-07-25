#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s1, s2;
	
	while(true){
		cin >> s1 >> s2;
		if(s1 == s2 && s1 == "0") break;
		
		int cont = 0, r, m, t1, t2;
		r = min(s1.size(), s2.size());
		m = max(s1.size(), s2.size());
		
		t1 = s1.size() - 1;
		t2 = s2.size() - 1;
		
		int x, y, res = 0, carry = 0;
		while(t1 >= 0 && t2 >= 0){
			x = s1[t1] - '0'; y = s2[t2] - '0';
			
			if(x + y + carry >= 10){
				cont++;
				res = (x + y + carry) % 10;
				carry = ((x + y + carry) - res) / 10;
			}
			else
				carry = res = 0;
			
			t1--; t2--;
		}
		
		int cond = m - r;
		int maior = (s1.size() > s2.size())? 1 : 2;
		
		if(cond > 0){
			int k = 0;
			for(int i = cond; i > 0; i--){
				k = (maior == 1)? s1[i - 1] - '0' : s2[i - 1] - '0'; 
				
				if(k + carry >= 10){
					cont++;
					res = (k + carry) % 10;
					carry = ((k + carry) - res) / 10;
				}
				else
					carry = res = 0;
			}
		}
		
		if(cont == 0) cout << "No carry operation." << endl;
			
		else if(cont == 1)
			cout << cont << " carry operation." << endl;
		
		else cout << cont << " carry operations." << endl;
	}	
	
	return 0;
}