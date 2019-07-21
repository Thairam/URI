#include <bits/stdc++.h>

using namespace std;

int teste = 1;

int main(){
	
	int n;
	int a = 0, b = 0;
	
	scanf("%d", &n);
	
	if(n == 0) return 0;
	
	cout << "Teste " << teste << endl;
	
	for(int i = 0; i < n; i++){
		
		int aa, bb;
		
		scanf("%d %d", &aa, &bb);
		
		a+= aa;
		b+= bb;
		
		cout << a - b << endl;
	}
	cout << endl;
	teste++;
	
	main();
		
	return 0;
}