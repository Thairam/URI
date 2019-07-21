#include <bits/stdc++.h>

using namespace std;

bool p_valida(string s){
	
	bool valid = false;
	
	if(s.length() == 8){
	
		for(int i = 0; i < 3; i++){
			if(s[i] >= 65 && s[i] <= 90){
				valid = true;
			}else 
				return false;
		}		
		
			if(s[3] == '-'){
				valid = true;
			}else 
			 	return false;
				 
		for(int j = 4; j < 8; j++){
			if(s[j] >= 48 && s[j] <= 57){
				valid = true;
			}else 
				return false;
	    }
		
			return valid;
			 	  		
	} else 
	
		return false;  
		
}

int main(){
	
	int n;
	string str;
	bool result = false;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		   	
		cin >> str;
		result = p_valida(str);
		
		if(result == true){
			
			if(str[7] == '1' || str[7] == '2')
				cout << "MONDAY" << endl;
				
			else if (str[7] == '3' || str[7] == '4')
				cout << "TUESDAY" << endl;
			else if (str[7] == '5' || str[7] == '6')
				cout << "WEDNESDAY" << endl; 
			else if (str[7] == '7' || str[7] == '8')
				cout << "THURSDAY" << endl;
			else if (str[7] == '9' || str[7] == '0')
				cout << "FRIDAY" << endl;
		} else 
			cout << "FAILURE" << endl;
		
	}
	
	return 0;
}