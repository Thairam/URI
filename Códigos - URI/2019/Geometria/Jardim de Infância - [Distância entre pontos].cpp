#include <bits/stdc++.h>

using namespace std;

// Apelida o tipo double de T.
typedef double T;

typedef struct pt{
	T x, y;
	pt(){}
	
	pt(T x, T y) : x(x), y(y){}
	pt operator-(pt p){return pt(x-p.x, y-p.y);} // define o operador de subtra��o de um ponto.
    pt operator+(pt p){return pt(x+p.x, y+p.y);} // define o operador de adi��o de um ponto.
	pt operator*(T a){return pt(x*a, y*a);} // define o operador de multiplica��o sde um ponto.
	pt operator/(T a){return pt(x/a, y/a);} // define o operador de divis�o de um ponto. 
	  	
 	
} pt;

// dist�ncia
T sq(pt p){return p.x*p.x + p.y*p.y;}

// Raiz da dist�ncia.
T abs(pt p){sqrt(sq(p));}

// produto interno
T dot(pt p1, pt p2){return p1.x*p2.x + p1.y*p2.y;}

// produto vetorial de ordem (2).
T cross(pt p1, pt p2){return p1.x*p2.y - p1.y*p2.x;}

// produto vetorial de ordem(3).
T det(pt p1, pt p2, pt p3){
	return p1.x*(p2.y - p3.y) - p1.y*(p2.x - p3.x) + (p2.x*p3.y - p2.y*p3.x);
}

int main(){
	
	int x, y;
	
	//vetor de pontos.
	pt v[7];
	
	for(int i = 0; i < 7; i++){
		scanf("%d %d", &x, &y);
		pt p(x, y);
		v[i] = p;
	}	
	
	T ang = dot(v[1]-v[0], v[2]-v[0]); //utiliza o produto interno pra saber o tipo de �ngulo.
	T p1p2 = sq(v[0]-v[1]); // m�dulo de P1P2
	T p1p3 = sq(v[2]-v[0]); // m�dulo de P1P3
	T p2p3 = sq(v[2]-v[1]); // m�dulo de P2P3
	T p4p5 = sq(v[4]-v[3]); // m�dulo de P4P5
	
	pt p1p6 = v[5]-v[0]; // segmento P1P6
	pt p4p6 = v[5]-v[3]; // segmento P4P6
	pt p5p7 = v[6]-v[4]; // segmento P5P7
	
	pt pMedio23 = (v[1] + v[2]) / 2; // ponto m�dio entre P2 e P3
	pt pMedio45 = (v[3] + v[4]) / 2; // ponto m�dio entre P4 e P5
	
	if(ang <= 0) // o �ngulo n�o � agudo.
		printf("N\n");
	else if(p1p2 != p1p3) // os segmentos n�o tem o mesmo comprimento.
		printf("N\n");
	else if(det(v[1], v[2], v[3]) != 0 && det(v[1], v[2], v[4]) != 0) //os pontos n�o s�o colineares.
		printf("N\n");
	else if(pMedio23.x != pMedio45.x || pMedio23.y != pMedio45.y) // os pontos m�dios n�o s�o coincidentes.
		printf("N\n");		
	else if(p2p3 <= p4p5) // o segmento P2P3 tem comprimento menor ou igual ao segmento P4P5.
		printf("N\n");
	else if(dot(p4p6, v[2]-v[1]) != 0 || dot(p5p7, v[2]-v[1]) != 0) // os segmentos P4P6 e P5P7 n�o s�o perpendiculares ao segmento P2P3. 
		printf("N\n");
	else if(sq(p4p6) != sq(p5p7)) // Os segmentos possuem comprimentos diferentes.
		printf("N\n");
	else if((det(v[1], v[2], v[0]) * det(v[1], v[2], v[5])) >= 0) // O segmento P1P6 n�o intercepta a reta que cont�m o segmento P2P3 em um �nico ponto.
		printf("N\n");
	else
		printf("S\n");
	
	return 0;
}