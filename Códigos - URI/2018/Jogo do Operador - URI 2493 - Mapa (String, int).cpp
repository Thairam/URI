#include <bits/stdc++.h>
#include <map>

using namespace std;

int resultados[51][51];
map<string, int> nomes;

int verifica(string str, int exp, char c2)
{
	char operadores[] = {'+', '-', '*'};
	int a, b, c;
	a = b = c = 0;

	for(int j = 0; j < 1; j++)
	{
		if(c2 == '+')
		{
			a = resultados[exp - 1][0];
			b = resultados[exp - 1][1];
			c = resultados[exp - 1][2];
			if( (a + b) == c) return 1;
			else return 0;
		}
		else if(c2 == '-')
		{
			a = resultados[exp - 1][0];
			b = resultados[exp - 1][1];
			c = resultados[exp - 1][2];
			if( (a - b) == c) return 1;
			else return 0;
		}
		else if(c2 == '*')
		{
			a = resultados[exp - 1][0];
			b = resultados[exp - 1][1];
			c = resultados[exp - 1][2];
			if(( a * b) == c) return 1;
			else return 0;
		}
		else if(c2 == 'I')
		{
			for(int i = 0; i < 3; i++)
			{
				if( verifica(str, exp, operadores[i]) == 1 ) return 0;

			}
			return 1;
		}
	}

}

int main()
{

	int t;


	while(cin >> t && t != EOF)
	{
		int x, y, z;
		char c1;
		memset(resultados, 0, sizeof(resultados));

		for(int i = 0; i < t; i++)
		{
			cin >> x >> y >> c1 >> z;
			for(int j = 0; j < 1; j++)
			{
				resultados[i][0] = x;
				resultados[i][1] = y;
				resultados[i][2] = z;
			}
		}

		int exp;
		string str;
		char c2;

		for(int i = 0; i < t; i++)
		{
			int result;
			cin >> str >> exp >> c2;
			result = verifica(str, exp, c2);
			nomes[str] = result;

		}

		map<string, int>::iterator it;
		it = nomes.begin();
		int ng = 0, td = 0;

		while(it != nomes.end())
		{
			if(it->second == 0)
			{
				ng++;
			}
			else if(it->second == 1)
				td++;
			it++;
		}

		if(ng == t)

			cout << "None Shall Pass!";

		else if(td == t)

			cout << "You Shall All Pass!";

		else
		{
			it = nomes.begin();
			int tam = 1;
			while(it != nomes.end())
			{
				if(it->second == 0)
				{
					cout << it->first;
					if(tam < ng) cout << " ";
					tam++;			
				}
				it++;
			}
		}
		cout << endl;
		nomes.clear();
	}
	
	return 0;
}
