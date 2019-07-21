#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){
	
	int n,x;
	
	scanf("%d", &n);
	
	while(n--){
		scanf("%d", &x);
		string str;
		set<string> idiomas;
		
		while(x--){
			cin >> str;
			idiomas.insert(str);
		}
		if(idiomas.size() > 1){
			printf("ingles\n");
		}else
			cout << *(idiomas.begin()) << endl;    
	}	
	
	return 0;
}
