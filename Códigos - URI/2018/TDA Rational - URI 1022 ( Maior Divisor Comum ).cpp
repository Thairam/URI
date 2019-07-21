#include <bits/stdc++.h>

using namespace std;

//maior divisor comum
int mdc(int x, int y){
	if(x < 0) x = -x;
	if(y < 0) y = -y;
	if(x % y == 0) return y;
	else return mdc(y, x % y);
}

int main(){
	
	int n1, n2, d1,d2;
	char c;
	int testes;
	int num, den, div;
	
	cin >> testes;
	
	do{
		
		scanf("%d / %d %c %d / %d", &n1, &d1, &c, &n2, &d2);
		if(c == '+'){
			num = (n1*d2 + n2*d1);
			den = (d1*d2);
		}
		else if(c == '-'){
			num = (n1*d2 - n2*d1);
			den = (d1*d2);
		}
		else if(c == '*'){
			num = (n1*n2);
			den = (d1*d2);
		}
		else if(c == '/'){
			num = (n1*d2);
			den = (n2*d1);
		}
		
		div = mdc(num,den);
		
		printf("%d/%d = %d/%d\n", num, den, num/div, den/div);
		
		testes--;
		
	}while(testes > 0);
	
	return 0;
}