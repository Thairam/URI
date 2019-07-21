#include <bits/stdc++.h>
#define pii pair <int, int>
#define mp make_pair
#define pb push_back

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<pii> horarios;

	int x, y;	
	for(int i = 0; i < n; i++){
		cin >> x >> y;
	
		horarios.pb(mp(y, x));	
	}
	
	int cont = 1;
	sort(horarios.begin(), horarios.end());
	
	for(int i = 1, j = 0; i < n; i++){
		if(horarios[i].second >= horarios[j].first){
			cont++;
			j = i; // j guarda a posi do último atendimento
		}
	}
	
	cout << cont << endl;
	
	return 0;
}