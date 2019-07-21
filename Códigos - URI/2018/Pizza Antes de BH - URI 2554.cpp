#include <bits/stdc++.h>

using namespace std;

int main()
{

	string data, data2;
	int n, m;

	while(cin >> n >> m)
	{
		int result = 0;
		int cont = 0;
		int flag = 0;
		int x = 0;

		for(int i = 0; i < m; i++)
		{
			cin >> data;

			for(int j = 0; j < n; j++)
			{
				cin >> x;
				cont += x;
			}

			if(cont == n && flag == 0)
			{
				data2 = data;
				flag = 1;
				result = cont;
			}
			else cont = 0;
		}

		if(result == n) cout << data2 << endl;
		else cout << "Pizza antes de FdI" << endl;

	}

	return 0;

}
