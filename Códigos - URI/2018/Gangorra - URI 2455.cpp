#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int p1, c1, p2, c2;

	int pe = 0, pd = 0;
		
	scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
	pe = (p1*c1);
	pd = (p2*c2);
	
	if(pe > pd){
		cout << "-1" << endl;
	}else if(pd > pe){
		cout << "1" << endl;
	}else if(pe == pd){
		cout << "0" << endl;
	}	
	
	return 0;
}