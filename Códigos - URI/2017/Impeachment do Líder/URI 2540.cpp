#include <cstdio>

using namespace std;

int main(){
	int n,m;
	//scanf("%d ", &n);
	
	while(scanf("%d", &n)!= EOF){
		float div = n*0.66;
		int soma = 0;
		for(int i =0; i < n; i++){
			scanf("%d", &m);
			soma+= m;
		}
		if(soma > div){
			printf("impeachment\n");
		}else{
			printf("acusacao arquivada\n");
		}
	}
	
	return 0;
}
