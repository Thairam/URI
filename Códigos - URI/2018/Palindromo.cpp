#include <bits/stdc++.h>
#define MAX 2005

using namespace std;

typedef pair<int, int> ii;

string str;
int esp[MAX];
ii table[MAX][MAX];

ii operator +(const ii a, const ii b){
	return ii(a.first + b.first, a.second + b.second);
}

ii max(ii a, ii b){
	if(a.first != b.first){
		return a.first > b.first ? a : b;
	}
	
	return a.second > b.second ? a : b;
}

ii solution(int l, int r){
	
	if(l == r)
		return table[l][r] = ii(esp[l], 1);
	if(l + 1 == r)
		return table[l][r] = str[l] == str[r] ? ii(esp[l] + esp[r], 2) : ii(esp[l] || esp[r ],1);
	if(table[l][r] != ii(-1, -1))
		return table[l][r];
	
	if(str[l] == str[r])
		return table[l][r] = max(ii(esp[l] + esp[r],2) + solution(l + 1, r - 1), max(solution(l + 1, r), solution(l, r - 1)));
	return table[l][r] = max(solution(l + 1, r), solution(l, r - 1));
	
}

int main(){
	
	
	int x, y;
	
	cin >> str;
	
	memset(esp, 0, sizeof esp);
	
	cin >> x;
	
	while(x--){
		cin >> y;
		esp[--y] = 1;
	}
	
	int tam = str.size();
	
	for(int i = 0; i < tam; i++)
		for(int j = 0; j < tam; j++)
			table[i][j] = ii(-1, -1);
	
	cout <<  solution(0, tam - 1).second << endl;
	
	return 0;
}