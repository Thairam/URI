#include <iostream>

using namespace std;

int main()
{
	int n, d, a;
	
	cin >> n >> d >> a;
	
	if(a <= d) cout << (d - a) << endl;
	else cout << (n - a) + d << endl;
	
	return 0;
}
