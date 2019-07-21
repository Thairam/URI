#include <bits/stdc++.h>
#define tam 11

using namespace std;

int m[tam][tam];
int c[tam], l[tam];

bool valid(int n){
	
	int dp = 0, ds = 0;	
	for(int i = 0; i < n; i++){
		ds+= m[i][n - i - 1];
		for(int j = 0; j < n; j++){
			l[i]+= m[i][j];
			c[i]+= m[j][i];
		}
		dp+= m[i][i];
	}
	
	for(int i = 0; i < n - 1; i++){
		if(l[i] != l[i + 1] || c[i] != c[i + 1])
			return false;
	}
	
//	if(dp == ds && dp == l[0] && ds == c[0]) return true;	
	return dp == ds;
}

int main(){
	
	int n;
	cin >> n;
	
	int res = 0, flag = -1;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> m[i][j];		
		}
		res+= m[i][i];	
	}
	
	cout << (valid(n) == true ? res : flag) << endl;
		
	return 0;
}