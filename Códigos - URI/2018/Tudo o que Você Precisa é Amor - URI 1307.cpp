#include <bits/stdc++.h>

using namespace std;

int main() {
  
  int n;
  long long x, y, result; 
  string s1, s2; 
  
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> s1 >> s2;
    
    //a fun��o stoll converte uma string para um long long utilizando uma base passada no 3� par�metro.
	x = stoll(s1, 0, 2);
	y = stoll(s2, 0, 2);
	
	// a fun��o __gcd retorna o maior divisor comum entre dois n�meros.
    result = __gcd(x, y);
    
    cout << "Pair #" << i + 1 << ": ";
    
    if(result == 1)
		cout << "Love is not all you need!" << endl;
	else
		cout << "All you need is love!" << endl;
  }
  
  return 0;
  
}