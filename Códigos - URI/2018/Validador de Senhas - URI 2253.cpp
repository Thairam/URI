#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	
	while(getline(cin,s)){
		
		string s1 = "";
		int u=0,sm=0;
	
		for( int i = 0 ;  i  <  s.size()  ; i++ ) {
		
			// verifica se o caracter � maiusculo, minusculo ou decimal respectivamente, se n�o for "break";
			if((isupper(s[i])) || (islower(s[i])) || (isdigit(s[i]))){	
		
			// cria outra string (s1) a partir dos caracteres v�lidos da string (s)
			s1 += s[i];
			if(isupper(s[i]))u++;
			if(islower(s[i]))sm++;
		
			}else break;
		
		}
			// verifica se a strings possuem o mesmo tamanho, e se os crit�rios para valida��o da senha s�o obedecidos
			if(s1.size() == s.size() && u>0 && sm>0 && s1.size() > 5 && s1.size() < 33)
				cout << "Senha valida.\n";
			else
				cout << "Senha invalida.\n";
	}

	return 0;
}
