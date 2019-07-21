#include <bits/stdc++.h>
using namespace std;

int main (){
	int a;
	double n,m,p;
	while(cin >> n >>m){
		a = n ;
		p = n - a ;
	  if(p >= m )  cout << a+1 <<endl;
	  else 	cout << a <<endl;
	}
	return 0;
}
