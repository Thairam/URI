#include <bits/stdc++.h>
#define MAX 1000100
#include <vector>

using namespace std;

bool primo[MAX];
vector<int> v;

//Calcula todos os não primos até a raiz do número
void n_primo(int x){
  int raiz = sqrt(x); 
  
  for(int i = 4; i <= x; i+=2) 
  	  primo[i] = 1;

  for(int i = 3; i <= raiz; i+=2) 
  	  if (!primo[i]){
	  	  v.push_back(i);
			  	  	
			for (int j = i*i; j <= x; j+=i) 
				primo[j] = 1;
	  }

}

bool despojado(long long x){
	int cont = 0;
	int raiz = sqrt(x);
		if (x % 2 == 0){ 
			x /= 2; 
			cont++;
		}
		
		//Número que pode ser decomposto por um único primo ex; x = 2 ^ y
		if (x % 2 == 0) return false; 
					
	for(int i = 3; i <= raiz && x > 1; i += 2){
		//Um número primo não pode ser formado pelo produto de dois primos.
		if (!primo[i]){
			if (x%i == 0) { 
				x /= i; 
				cont++;
				if (x%i == 0) return false; 
			} 
		 } 	
	}
	
	if (cont == 0 || (cont == 1 && x == 1)) return false;
	return true;
}

int divisores(long long x){
	int cont = 0;
	int raiz = sqrt(x);
	
	if(x%2 == 0){
		x /= 2;
		cont++;
	}
	
	for(int i = 3; i <= v.size() && i <= (x/2); i+= 2){
		if(x % i == 0) cont++;
	}
	
	return cont;
}

int main(){

long long n;
	cin >> n;
	int raiz = sqrt(n);
	n_primo(raiz); 
	int cont = 0;
	
	
	cont = divisores(n);
	cout << (pow(2,cont) - 1) - cont << endl;


/*	
	for (int i = 1; i <= raiz; i++){
		if (n%i == 0){
			if(despojado(i)) cont++;
			
			if(n/i != i)  
				if(despojado(n/i)) cont++; 
		} 
	}
		
	cout << cont << endl;
*/	
	return 0;
	
}