#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, time1, time2, time3, time4;
	char c;
	
	scanf("%d", &n);
	
	
	while(n--){
		scanf("%d %c %d", &time1, &c, &time2);
		scanf("%d %c %d", &time3, &c, &time4);
		
		
		if((time1 + time4) == (time2 + time3)){
			if(time4 > time2){
				printf("Time 1\n");
			} else if(time1 > time3){
				printf("Time 2\n");
			} else printf("Penaltis\n");
			
		} else if((time1 + time4) > (time2 + time3)){
			printf("Time 1\n");
			
		} else printf("Time 2\n");	
		
	}
	
	return 0;
}
