#include <bits/stdc++.h>

using namespace std;

int pow(int x){
	return x * x;
}

int main(){
	
	int v[3];
	
	cin >> v[0] >> v[1] >> v[2];
	
	sort(v, v + 3);
	
	if(v[2] >= v[0] + v[1]) cout << "n" << endl;
	else if(pow(v[2]) < pow(v[0]) + pow(v[1])) cout << "a" << endl;
	else if(pow(v[2]) == pow(v[0]) + pow(v[1])) cout << "r" << endl;
	else if(pow(v[2]) > pow(v[0]) + pow(v[1])) cout << "o" << endl;	
	
	return 0;
}