#include <bits/stdc++.h>

using namespace std;

int solve(int c, int * furos, int * remendos){
    int dp[c], it = 0;
    memset(dp, 0, c * sizeof(int));
    dp[0] = 0;

    for(int i = 0; i < c; i++){
        if(i != furos[it]){
            if((i-1) >= 0) dp[i] = dp[i-1];
        }
        else{
            it++;
            if(i > remendos[0]){
                int d1 = (i - remendos[0]) - 1;
                int d2 = (i - remendos[1]) - 1;

                if(d2 >= 0) dp[i] = min(remendos[0] + dp[d1], remendos[1] + dp[d2]);
                else dp[i] = remendos[0] + dp[d1];
            }
            else dp[i] = remendos[0];
        }
    }

    return dp[c-1];
}

int main(){

    int n, c;
    int remendos[2];

    while(scanf("%d %d %d %d", &n, &c, &remendos[0], &remendos[1]) != EOF){
        int furos[n];
        sort(remendos, remendos + 2);

        for(int i = 0; i < n; i++){
            scanf("%d", &furos[i]);
        }

        printf("%d\n", solve(c, furos, remendos));
    }

    return 0;
}

