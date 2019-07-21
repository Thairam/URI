#include <bits/stdc++.h>

using namespace std;

int main(){
	char str[10];
	int n;
	
	scanf("%d", &n);
		
		for(int i = 0; i < n; i++){
			scanf("%s", &str);
			if(strlen(str) == 3){
				if(str[0] == 'o' || str[2] == 'e'){
					printf("1\n");
				} else {
					printf("2\n");
				}
			} else {
				printf("3\n");
			}
		}
	
	return 0;
}
