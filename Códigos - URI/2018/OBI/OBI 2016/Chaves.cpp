#include <bits/stdc++.h>

using namespace std;

int main(){
	

	string str;
	int cont = 0;
	
	while(getline(cin, str)){
		for(int i = 0; i < str.size(); i++){
			if(str[i] == '{'){
				cont++;
			}
			else if(str[i] == '}'){
				cont--;
				if(cont < 0) break;
			}
		}
	}
	if(cont == 0) printf("S\n");
	else printf("N\n");
	
	return 0;
}