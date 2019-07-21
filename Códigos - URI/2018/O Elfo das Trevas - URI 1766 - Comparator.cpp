#include <bits/stdc++.h>
#include <set>

using namespace std;

struct rena{
	string name;
	int age, weight;
	double height;	
	
	rena(){}
	bool operator < (const rena &r) const{
		if(weight == r.weight){
			if(age == r.age){
				if(height == r.height)
					return name < r.name;
				return height < r.height;
			}
			return age < r.age;
		}
		return weight > r.weight;
	}
};

int main(){
	
	int t, cont = 0;
	scanf("%d", &t);
	
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		vector<rena> renas;
		
		for(int i = 0; i < n; i++){
			rena r;
			cin >> r.name >> r.weight >> r.age >> r.height;
			renas.push_back(r);
		}
		
		sort(renas.begin(), renas.end());
		cout << "CENARIO {" << ++cont << "}" << endl;
		
		for(int i = 0; i < m; i++)
			cout << (i + 1) << " - " << renas[i].name << endl;
	}
	
	return 0;
}