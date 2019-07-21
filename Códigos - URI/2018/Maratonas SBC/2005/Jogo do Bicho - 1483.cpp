#include <bits/stdc++.h>

using namespace std;

int main()
{

	double v;
	long long n, m;

	while(cin >> v >> n >> m && (v + n + m))
	{
		// Verifica se os 4 �ltimos digitos de ambos os n�meros s�o iguais
		if( (n % 10000) == (m % 10000) ) printf("%.2lf\n", (v * 3000) );
		// Verifica se os 3 �ltimos digitos de ambos os n�meros s�o iguais
		else if( (n % 1000) == (m % 1000) ) printf("%.2f\n", (v * 500) );
		else
		{
			n %= 100;
			m %= 100;
			//Verifica se os 2 �ltimos digitos de ambos os n�meros s�o iguais
			if(n == m) printf("%.2f\n", (v * 50) );
			else
			{
				if(n == 0) n = 100;
				if(m == 0) m = 100;
				// Somo 3 para descobrir se ambos os n�meros est�o no mesmo grupo associado a um animal
				n += 3;
				m += 3;

				if( (n/4) == (m/4) ) printf("%.2f\n", (v * 16) );
				else printf("%.2f\n", 0.0);

			}
		}

	}

	return 0;
}
