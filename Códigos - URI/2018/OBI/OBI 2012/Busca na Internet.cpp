#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int cv, ce, cs, fv, fe, fs;
	int c, f;
	
	cin >> cv >> ce >> cs >> fv >> fe >> fs;
	c = (cv * 3) + ce; f = (fv * 3) + fe;
	
	if(c > f){
		cout << "C" << endl;
	}
	else if(f > c){
		cout << "F" << endl;
	}
	else{
		if(cs > fs){
			cout << "C" << endl;
		}
		else if(fs > cs){
			cout << "F" << endl;
		}
		else{
			cout << "=" << endl;
		}
	}
		
	
	   	
	
	return 0;
}