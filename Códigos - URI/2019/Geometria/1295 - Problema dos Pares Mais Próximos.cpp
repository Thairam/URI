#include <bits/stdc++.h>

using namespace std;

typedef double T;

typedef struct pt{
	T x, y;
	pt(){}
	pt(T x, T y) : x(x), y(y){}
	pt operator-(pt p){ return pt(x-p.x, y-p.y);}
	pt operator+(pt p){ return pt(x+p.x, y+p.y);}
	pt operator*(T a) { return  pt(x*a, y*a);}
	pt operator/(T a) { return  pt(x/a, y/a);}
} pt, vet;

//	Módulo do vetor ao quadrado
T sq(vet v){return v.x*v.x + v.y*v.y;}
//	Módulo do vetor
double abs(vet v){return sqrt(sq(v));}

double solve(int n, pt * v){
	double res = 10000;
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			res = min(res, abs(v[j] - v[i]));
		}
	}
	
	return res;
}


int main(){
	
	int n;
	pt p[10002];
	while(scanf("%d", &n) && n){
		T ans = 0;
		
		for(int i = 0; i < n; i++){
			cin >> p[i].x >> p[i].y;
		}
	
		ans = solve(n, p);
		
		if(ans < 10000){
			printf("%.4lf\n", ans);
		}
		else
			cout << "INFINITY" << endl; 		
	}
	
	return 0;
}