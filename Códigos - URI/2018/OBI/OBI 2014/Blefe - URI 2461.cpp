#include <bits/stdc++.h>
#include <set>

using namespace std;

set<int> A;
int B[10005];
bool blefe = false;

bool verifica(int valor, int tam){
	
	int soma = 0;
	int i = 0, j = tam - 1;
	
	while(i <= j){
		
		soma = B[i] + B[j];
		
		if(soma == valor) return false;
		
		else if(soma > valor){
			j--;
		}
		else if(soma < valor){
			i++;
		}	
	}
	
	return true;
	
}

int main(){
			
	int n, m;
	int a, b;
	
	cin >> n >> m;	
	
	for(int i = 0; i < n; i++){
		cin >> a;
		A.insert(a);
	}
	
	int flag = 0, aux = 0;
	
	for(int i = 0; i < m; i++){
		
		cin >> b;
		
		if(!A.count(b) && !blefe){
			
			blefe = verifica(b, i);
			
			if(blefe){
				
				flag = b;
			}
		}	
		
	   	int j = i; 
		while(j > 0 && B[j - 1] > b){
			B[j] = B[j - 1];
			j--;
		}
		
		B[j] = b;       
	   	 
	}
	
	if(!blefe) cout << "sim" << endl;
	else cout << flag << endl;
	
	return 0;
}