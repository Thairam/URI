#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	string s;
	string s1;
	//char v[10001];
	vector<string> v(10001);
	
	scanf("%d", &n);
	
	for(int i = 1; i<= n; i++){
		cin >> s;
		if(s.size() == 3){
			if( (s[0] == 'O' || s[0] == 'U') && (s[1] == 'B' || s[1] == 'R') ){
					s[2] = 'I';
					v[i] = s;
			}else v[i] = s;
		}else 
			v[i] = s;s
	}
	
	for(int i = 1; i <= n; i++){
		cout << v[i];
		if(i!= n) printf(" ");
	}
	printf("\n");
	
	return 0;
}
