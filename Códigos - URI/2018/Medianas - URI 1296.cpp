#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<double> v(3);
	
	while(cin >> v[0] >> v[1] >> v[2]){
		sort(v.begin(), v.end());
		
		if( (v[0] + v[1] ) > v[2] ){
			double x = ( v[0] + v[1] + v[2]) / 2.00;
			double area = sqrt( x*( x - v[0]) * (x - v[1]) * (x - v[2]) );
			area = ( 4* area) / 3;
			printf("%.3lf\n", area);
		}else
			printf("-1.000\n");
	}

	return 0;
}
