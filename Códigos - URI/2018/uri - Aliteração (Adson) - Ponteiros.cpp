#include <cstdio>

using namespace std;

char * next_word(char * s){
	int i = 0;
	while (s[i] != ' ') {
		if (!s[i]) return NULL;
		i++;
	}

	return s + i + 1;
}

char lower(char c){
	return c < 'a' ? c + 32 : c;
}

int get_alit(char * s){
	char c = lower(s[0]);
	int cont = 0;
	bool alit = false;

	s = next_word(s);
	while (s) {
		if (c == lower(s[0])) {
			alit = true;
		}else{
			if (alit) cont++;
			alit = false;
			c = lower(s[0]);
		}

		s = next_word(s);
	}

	return cont + alit;
}

int main(){
	char s[5500];

	while (gets(s)){
		printf("%d\n", get_alit(s));
	}

	return 0;
}
