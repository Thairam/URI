#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y, n;
	string str;
	int comandos[103];
	
	scanf("%d", &n);
	
	while(n--){
		int pos = 0;
		scanf("%d", &x);
		for(int i = 1; i <= x; i++){
			cin >> str;
			if(str == "LEFT"){
				pos--;
				comandos[i] = -1;
			}else if (str == "RIGHT"){
				pos++;
				comandos[i] = 1;
			}else{
				scanf(" AS %d", &y);
				pos+= comandos[y];
				comandos[i] = comandos[y];
			}
		}
		printf("%d\n", pos);
	}
	return 0;
}
