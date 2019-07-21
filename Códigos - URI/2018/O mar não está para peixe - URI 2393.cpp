#include <bits/stdc++.h>
#define MAX 105

using namespace std;

int mar[MAX][MAX];

int main(){
	
	int n;	
	int xi, xf, yi, yf, maior = -1;
	
	cin >> n;
	while(n--){
		cin >> xi >> xf >> yi >> yf;
		
		if(xf > maior || yf > maior)
			maior = max(xf, yf);
		
		for(int i = xi; i < xf; i++){
			for(int j = yi; j < yf; j++){
				mar[i][j] = 1;
			}
		}
	}
	
	int area = 0;		
	for(int i = 0; i <= maior; i++){
		for(int j = 0; j <= maior; j++){
			if(mar[i][j] == 1)
				area++;
		}
	}
	
	cout << area << endl;
	
	return 0;
}