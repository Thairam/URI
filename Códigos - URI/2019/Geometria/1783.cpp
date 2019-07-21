#include <bits/stdc++.h>

using namespace std;

typedef double T;	//	Tipo de dados das coordenadas x,y

//	Estrutura para representar o ponto (pt) ou um vetor (vet) no plano
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
//	Produto interno/escalar
T dot(vet v, vet w){return v.x*w.x + v.y*w.y;}
//	Produto vetorial
T cross(vet v, vet w){return v.x*w.y - v.y*w.x;}
//	Desloca o ponto P na direção do vetor V
pt translate(pt p, vet v){return p+v;}
//	Dimensiona um polígono
pt scale(pt p, pt c, T a){return c + (p-c)*a;}

//	Retorna um vetor perpendicular ao vetor V
vet perp(vet v){return pt(v.y, -v.x);}

typedef struct line{
	vet V;
	T c;

	line(pt p, pt q): V(p-q), c(cross(V, q)){}
	line(T a, T b, T c): V(b, -a), c(c){}
	line(vet V, T c): V(V), c(c){}

	//	Posição do ponto P em relação a reta
	T side(pt p){return cross(V, p) - c;}
} line;

// Retorna uma reta perpendicular à reta l e passa por p 
line perpThrough(line l, pt p){ return line(p, p + perp(l.V)); }

//	Retorna a intersecção entre as linhas l1 e l2
bool intersect(line l1, line l2, pt & result){
	T den = cross(l1.V, l2.V);

	result = (l2.V*l1.c - l1.V*l2.c)/den;
	return true;
}

int main(){
	int t;
	double x1, x2, x3, x4, y1, y2, y3, y4;
	
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%lf %lf", &x1, &y1);
		scanf("%lf %lf", &x2, &y2);		   	
		scanf("%lf %lf", &x3, &y3);		   	
		scanf("%lf %lf", &x4, &y4);		   	
		
		pt p1(x1, y1);
		pt p2(x2, y2);
		pt p3(x3, y3);
		pt p4(x4, y4);
		
		pt pm1 = (p1 + p3) / 2;				
		pt pm2 = (p2 + p4) / 2;
					
		line l1(p1, p3);
		line l2(p2, p4);
		
		line perp1 = perpThrough(l1, pm1); 
		line perp2 = perpThrough(l2, pm2); 
		
		pt p_result;
		
		intersect(perp1, perp2, p_result);
		printf("Caso #%d: %.2lf %.2lf\n", i, p_result.x, p_result.y);
		
	}
	
	return 0;
}