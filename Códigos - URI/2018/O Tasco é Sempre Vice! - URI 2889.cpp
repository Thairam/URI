#include <bits/stdc++.h>
#include <vector>
using namespace std;

int v[1000005];

typedef struct time{
	int id;
	int p;
	int sg; //saldo de gols
		
	time(){}			
}Time;

	bool operator < (const Time &t1, const Time &t2){
		if(t1.p == t2.p){
			if(t1.sg == t2.sg)
				return t1.id < t2.id;
			else
				return t1.sg > t2.sg;
		}
		return t1.p > t2.p;
	}


int main(){
	   
	int n, m, mais_vice = 1;
	scanf("%d", &n);
	Time times[n + 1];
	
	while(scanf("%d", &m) && m){
		
		for(int i = 1; i <= n; i++){
			times[i].id = i;
			times[i].p = 0;
			times[i].sg = 0;
		}
		
		int t1, p1, t2, p2;
		
		for(int i = 0; i < m; i++){
			scanf("%d %d %d %d", &t1, &p1, &t2, &p2);
			
			if(p1 == p2){
				times[t1].p+= 1;
				times[t2].p+= 1;
			}else if(p1 > p2){
				times[t1].p+= 3;
			}else {
				times[t2].p+= 3;
			}
			
			times[t1].sg+= p1;
			times[t2].sg+= p2;											
		}
		
		sort(times + 1, times + (n + 1));
		v[times[2].id]++;	  
	
	}
	
	for(int i = 2; i <= n; i++){
		if(v[i] > v[mais_vice])
			mais_vice = i;
	}
		
	printf((mais_vice == 1)? "Y\n" : "N\n");
	   	
	return 0;
}