#include <bits/stdc++.h>

using namespace std;

typedef int T;
vector<T> v;

typedef struct pt{
	T x, y;
	pt(){}
	pt(T x, T y) : x(x), y(y){}
	pt operator-(pt p){return pt(x-p.x, y-p.y);}
} pt;

T sq(pt p){return p.x*p.x + p.y*p.y;}
T abs(pt p){return sqrt(sq(p));}


int main(){
	
	T x, y, n;
	scanf("%d %d %d", &x, &y, &n);
	pt p(x, y);

	T t; 
	pt pi;
	for(int i = 0; i < n; i++){
		scanf("%d %d %d", &pi.x, &pi.y, &t);
		if(abs(pi-p) < t){
			v.push_back(i+1);
		}	
	}
	
	if(v.size() == 0)
		printf("-1\n");
	else{
		for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
			printf("%d", *it);
			if(it != v.end() - 1) printf(" ");			
		}
		printf("\n");	
	}	

	return 0;
}