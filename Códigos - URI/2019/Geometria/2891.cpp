#include <bits/stdc++.h>

using namespace std;

typedef int T;

typedef struct pt{
	T x, y;
	pt(){}
	pt(T x, T y) : x(x), y(y){}
	pt operator-(pt p){return pt(x-p.x, y-p.y);}
	pt operator+(pt p){return pt(x+p.x, y+p.y);}
} pt;

T cross(pt p1, pt p2){return p1.x*p2.y - p1.y*p2.x;}

T orient(pt p1, pt p2, pt p3){return cross(p2-p1, p3-p1);}

double area(pt * pol, int n){
	double A = 0;
	
	for(int i = 0; i < n; i++){
		A += orient(pt(0,0), pol[i], pol[(i+1)%n]);
	}
	
	return A/2;
}

bool isConvex(pt * pol, int n){
	double o = orient(pol[0], pol[1], pol[2]);
	
	for(int i = 1; i < n; i++)
		if(orient(pol[i], pol[(i+1)%n], pol[(i+2)%n]) * o < 0) return false;
	
	return true;
}

int main(){
	
	T x1, x2, y1, y2, x3, y3, x4, y4, x5, y5;
	
	while(scanf("%d %d %d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &x5, &y5)
		  && (x1+x2+y1+y2+x3+y3+x4+y4+x5+y5)
		 ){

		pt v[] = {pt(x1, y1), pt(x2, y2), pt(x3,y3), pt(x4, y4), pt(x5,y5)};
		pt pol[4];
		double a_maior = 0;
		
		for(int i = 0; i < 5; i++){
			for(int j = 0; j < 5; j++){
				if(i == j) continue;
				for(int k = 0; k < 5; k++){
					if(i == k || j == k) continue;
					for(int r = 0; r < 5; r++){
						if(i == r || j == r || k == r) continue;
						pol[0] = v[i];
						pol[1] = v[j];
						pol[2] = v[k];
						pol[3] = v[r];
						if(isConvex(pol, 4)){
							a_maior = max(area(pol, 4), a_maior);		
						}
					}
				}
			}
		}
		
		printf("%.0lf\n", a_maior);						
	}
	
	return 0;
}