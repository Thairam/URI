#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n = 0, num = 0;
	double result = 1;
	char op;

	scanf("%d", &n);

	while(n--){
		scanf("%d %c", &num, &op);
		result = (op == '*') ? result * num : result / num;
	}

	printf("%.0lf\n", result);
	
	return 0;
}