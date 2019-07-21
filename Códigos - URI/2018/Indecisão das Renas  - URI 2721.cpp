#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int soma;
	int n;
	string renas[] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet",
	   	   	   	   	  "Cupid", "Donner", "Blitzen","Rudolph"};
	
	soma = 0;
	int resto = 0;
														   																  	  
	for(int i = 0; i < 9; i++){
		scanf("%d", &n);
		soma+= n;		 			
	}
	
	
	resto = soma%9;
	
	
	if(soma%9 == 0){
		cout << renas[8] << endl;
	}else 
		cout << renas[resto-1] << endl; 
	
	return 0;
}

