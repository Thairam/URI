#include <bits/stdc++.h>

using namespace std;

int valor(long long int x){
	
	while(x >= 10){
		long long int aux = x;
		long long int s = 0;
		
		while(aux){
			s+= aux%10;
			aux/= 10;
		}
		x = s;
	}
	return x;
}

int compare(long long int a, long long int b){
	return (a > b? 1: a < b? 2 : 0);
}

int main(){
	
	string s1, s2;
	long long int a1, b1;
	
	while(1){
		
		cin >> s1 >> s2;
		
		if(s1 == "0" && s2 == "0") return 0;
		
		a1 = b1 = 0;
		
		for(int i = 0; i < s1.size(); i++) 
			a1 += s1[i] - '0';
		for(int i = 0; i < s2.size(); i++) 
			b1 += s2[i] - '0';	
			
			cout << compare(valor(a1), valor(b1)) << endl;		
		
	}
}
