#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double v[4];
	
	for(int i = 0; i < 5; i++)
		cin >> v[i];
	
	sort(v, v + 5);
	
	double result = v[1] + v[2] + v[3];
	
	printf("%.1lf\n", result);
	
	return 0;
}