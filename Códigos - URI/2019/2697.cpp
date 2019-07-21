#include <bits/stdc++.h>
#define MAXN 1001

using namespace std;

int v[MAXN];
int n, k, ans = 0, pos1 = 0, pos2 = 0;

int sub(){
	int atual = 0, pos = 0;
	for(int i = 1; i <= k; i++){
		bool ok = true;
		atual = v[i] - 1;
		pos = i;
		for(int j = 1; j <= k; j++){
			if(j != pos){
				if(v[j] != atual){
					ok = false;
					break;
				}
			}
		}
		if(ok) return pos;
	}
	return -1;
}

int soma(){
	int atual = 0, pos = 0;
	for(int i = 1; i <= k; i++){
		bool ok = true;
		atual = v[i] + 1;
		pos = i;
		for(int j = 1; j <= k; j++){
			if(j != pos){
				if(v[j] != atual){
					ok = false;
					break;
				}				
			}
		}
		if(ok) return pos;
	}
	return -1;
}

bool substitui(){
	for(int i = 1; i < k; i++){
		bool ok = true;
		int p1 = 0, p2 = 0;

		for(int j = i + 1; j <= k; j++){
			int a = v[i], b = v[j];
			if(a - 1 != b + 1 && a + 1 != b - 1){
				continue;
			}
			if(a - 1 == b + 1){
				a--;
				b++;
				p1 = i;
				p2 = j;
			}
			else{
				a++;
				b--;
				p1 = j;
				p2 = i;
			}
			for(int q = 1; q <= k; q++){
				if(q != p1 && q != p2){
					if(v[q] != a){
						ok = false;
						break;
					}
				}
			}
			if(ok){
				pos1 = p1;
				pos2 = p2;
				return true;
			}
		}
	}
	return false;
}

int main(){

	int pos;

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	scanf("%d %d", &k, &n);	
	for(int i = 1; i <= n; i++){
		scanf("%d", &pos);
		v[pos]++;
	}

	if(substitui())
		printf("-%d +%d\n", pos1, pos2);
	else{
		ans = sub();
		if(ans != -1) printf("-%d\n", ans);
		else{
			ans = soma();
			if(ans != -1) printf("+%d\n", ans);
			else printf("*\n");
		}		
	}
	
	return 0;
}