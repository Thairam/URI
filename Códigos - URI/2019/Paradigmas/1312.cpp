#include <bits/stdc++.h>
#define MAXN 1005
#define lld long long

using namespace std;

lld matriz[MAXN][MAXN];
lld dp[MAXN][MAXN];

void show(int n){
  printf("*********\n");
    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= n; j++){
        printf("%lld ", matriz[i][j]);
      }
      printf("\n");
    }
}

lld solve(int n){
	
	for(int j = n; j > 0; j--){
		
		for(int t = j-1; t >= 0; t--){
			dp[t][j] = max(dp[t][j], dp[t+1][j]);
		}
			
		for(int k = 0; k < j; k++){
			dp[k][j-1] = matriz[k][j-1] + dp[k][j];
		}				
	}	
	
	lld ans = 0;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){
			if(dp[i][j] > ans)
				ans = dp[i][j];			
		}
	}
	
	return ans;
}

int main() {
  int n;
  while(scanf("%d", &n) && n){
    memset(matriz, 0, (n+1) * sizeof(lld));
    memset(dp, 0, (n+1) * sizeof(lld));

    for(int i = 0; i < n; i++){
      for(int j = 0; j <= i; j++){
        scanf("%lld", &matriz[j][n-i-1+j]);
      }
    }
    
    for(int j = n; j > 0; j--){
      for(int i = 1; i <= j; i++){
        matriz[i][j] +=  matriz[i-1][j];
      }
	}    
	
	for(int i = 0; i < n; i++){
		dp[i][n-1] = matriz[i][n-1]; 
	}

    printf("%lld\n", solve(n-1));

  }

  return 0;
}