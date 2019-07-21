#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	char keyboard[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	
	char c;
	
	while(scanf("%c", &c)!= EOF){
		
		for(int i = 0; i < 48; i++){
			if(c == keyboard[i]){
				printf("%c", keyboard[i-1]);
				break;
			
			}else if(c == ' '){
				printf(" ");
				break;
			
			}else if(c == '\n'){
				printf("\n");
				break;
			}
		}
	}
	
	return 0;
}
