#include <bits/stdc++.h>
#define ll long long
#define dis 60000000

using namespace std;

bool is_Primo(int n){
	
	if(n % 2 == 0) return false;
	
	for(int i = 3; i <= sqrt(n); i+= 2){
		if(n % i == 0) return false;
	}

	return true;
}

int main(){
	
	ll n;
	ll result, cont;
	
	result = cont = 0;
	
	cin >> n;
	
	for(int i = n; cont < 10; i++){
		if(is_Primo(i)){
			cont++;
			result+= i;
		}
	}
	
	int hora = dis / result;
	int dia = hora / 24;
	
	cout << result << " km/h" << endl;
	cout << hora << " h / "<< dia << " d" << endl;  
	
	
	return 0;
}