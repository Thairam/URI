#include <bits/stdc++.h>

using namespace std;

int digitroot(int x){
	return (x - 1) % 9 + 1;
}

int getsoma(char * s){
	int soma = 0;
	
	for(int i = 0; s[i]; i++)
		soma += (s[i] - '0');
		
	return soma;	
}

int get_dr(char *b, char *e){
	int B = digitroot(getsoma(b));
	int E = getsoma(e);
	
	E = (E - 1)%6 + 1;
	if(B%3 == 0 && !e[1] == '\0') return 9;
	
	return digitroot((int)pow((double)B, (double)E));
}

int main(){
	
	char b[100100];
	char e[100100];
	
	cin >> b >> e;
	
	cout << get_dr(b, e) << endl;
		
}	
	
	