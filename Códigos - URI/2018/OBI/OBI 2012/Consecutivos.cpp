#include <bits/stdc++.h>

using namespace std;

int main(){
	
    int n, result = 0 , tot = 1;
    
    cin >> n;
    
    int v[n + 5];
    
   for(int i = 0; i < n ;i++){
	   cin >> v[i];   	
   	
   	   	if(v[i] == v[i - 1]) tot++;
   	   	
   	    else {
			result = max(result,tot);
			tot = 1;   
		}
   }

   result = max(result, tot);
   cout << result << endl;
	
	return 0;
}