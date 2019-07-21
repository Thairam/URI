#include <bits/stdc++.h>

using namespace std;

typedef int T;

typedef struct pt{
	T x, y;
	pt(){}
	pt(T x, T y) : x(x), y(y){}
	pt operator-(pt p){return pt(x-p.x, y-p.y);}
} pt;

T sq(pt p){return p.x*p.x + p.y*p.y;}
T abs(pt p){return sqrt(sq(p));}

int main(){
	
	int c, n, x, y;
	pt v[52];
	scanf("%d", &c);
	
	while(c--){
		scanf("%d", &n);
		
		for(int i = 0; i <= n; i++){
			scanf("%d %d", &v[i].x, &v[i].y);;				
		}
		
		int menor = 6000;
		int pos = 0;
		for(int i = 1; i <= n; i++){			
			if(abs(v[i]-v[0]) < menor){
				menor = abs(v[i]-v[0]);
				pos = i;
			}
		}
		
		printf("%d\n", pos);				
	}
	return 0;
}