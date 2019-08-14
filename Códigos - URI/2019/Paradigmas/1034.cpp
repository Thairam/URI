#include <bits/stdc++.h>

using namespace std;

int coin_change(int *v, int n, int m){
    int dp[m+1];
    memset(dp, 1, (m+1) * sizeof(int));
    dp[0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = v[i]; j <= m; j++){
            if(j - v[i] >= 0){
                dp[j] =  min(dp[j], dp[j - v[i]] + 1);
            }
        }
    }
    return dp[m];    
}

int main(){

    int t, n, m;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &n, &m);
        int v[n];

        for(int i = 0; i < n; i++)
            scanf("%d", &v[i]);
        
        printf("%d\n", coin_change(v, n, m));
    }

    return 0;
}