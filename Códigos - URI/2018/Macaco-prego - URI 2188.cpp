#include <bits/stdc++.h>
#define MAX 100000;

using namespace std;

bool exist_int(int x1, int x2, int y1, int y2){
	if(x2 < x1 || y1 < y2) return false;
	
	return true;
}

int main(){
	
	int n, t = 1;
	
	while(cin >> n && n){
		cout << "Teste " << t << endl;
		
		//max (a, d) e min(b, c)
		 int a, b, c, d;
		 a = -MAX; b = MAX; c = MAX; d = -MAX;
		
		while(n--){
			int x, y, u, v;
			
			cin >> x >> y >> u >> v;
			
			a = max(x, a); b = min(y, b);
			c = min(u, c); d = max(v, d);

		}
		
		if(!exist_int(a, c, b, d))
			cout << "nenhum" << endl;
		else{
        	cout << a << " " << b << " "
                 << c << " " << d << endl;			
		}
		
		cout << endl;
		t++;
	}
	
	return 0;
}
