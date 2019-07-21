#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int saiu = 0, voltou = 0;
	int t1 = 0, t2 = 0;
	int x;
	
	string str;
	
	while(cin >> str){
		if(str == "ABEND") break;
		
		if(str == "SALIDA"){
			scanf("%d", &x);
			t1+= x;
			saiu++;
		}else if(str == "VUELTA"){
			scanf("%d", &x);
			t2+= x;
			voltou++;
		}	
	
	}
		cout << t1 - t2 << endl;
		cout << saiu - voltou << endl;
	
	return 0;
}