#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	long long n;
	
	cin>>t;
	
	while(t--){
		
		cin>>n;
		long long maxx=0;
		long long count=0;
		long long temp;
		
		while(n){
			
			temp = n%2;
			n/=2;
			
			if(temp == 1)count++;
			else{
				if(count > maxx){
					maxx = count;
					count=0;
				}
				count= 0;
			}
		}
		if(count > maxx){
				maxx=count;
				count=0;
		}
		
		cout<< maxx <<endl;
	}

	return 0;
}
