#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int ia, ib, fa, fb;
	
	cin >> ia >> ib >> fa >> fb;
	
	if(ia != fa) printf("1\n");
	
	else{
		if(ib == fb) printf("0\n");
		else printf("2\n");
	}
	
	
	return 0;
}