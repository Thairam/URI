#include <bits/stdc++.h>

using namespace std;

int teste = 0;

int main(){
	
	int v, c1, c2, c3, c4;
	c1 = c2 = c3 = c4 = 0;
	
	
	scanf("%d", &v);
	
	if(v == 0) return 0;
	
	while(v > 0){
		
		if(v >= 50){
			v = v - 50;
			c1++;
		}else if(v >= 10){
			v = v - 10;
			c2++;
		}else if(v >= 5){
			v = v - 5;
			c3++;
		}else if(v >= 1){
			v = v - 1;
			c4++;
		}
	}
	
	teste++;
	cout << "Teste " << teste << endl;
	cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;
	cout << endl;
	
	main();
	
	
	return 0;
}