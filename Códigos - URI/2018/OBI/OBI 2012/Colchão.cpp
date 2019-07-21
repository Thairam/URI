#include <bits/stdc++.h>

using namespace std;

int h, l;

bool verif(int x, int y){
	return x <= h && y <= l; 
}

int main(){
	int a, b, c;
	
	cin >> a >> b >> c;
	cin >> h >> l;
	
	if(verif(a, b) || verif(b, a) || verif(a, c) || verif(c, a) || verif(b, c) || verif(c, b))
		cout << "S" << endl;
	else
		cout << "N" << endl;   	
	
	return 0;
}