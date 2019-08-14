#include<bits/stdc++.h>
#define MAXN 105
#define pii pair<int, int>

using namespace std;

int main(){

    int t;
    scanf("%d", &t);

   for(int teste = 1; teste <= t; teste++){
        pii v[MAXN];
        int n, d, m;
        char c;

        scanf("%d %d", &n, &d);
        v[0] = {0, 0};
        v[n+1] = {d, 0};

        for(int i = 1; i <= n; i++){
            scanf(" %c-%d", &c, &m);
            v[i] = {m, c=='S'};
        }

        int dist = 0, ans = 0;
        bool visited = false;

        for(int i = 1; i <= n+1; i++){
            if(v[i].second == 0){
                ans = max(ans, abs(dist - v[i].first));
                dist = v[i].first;
            }
            else if(v[i].second == 1){
                if(!visited){
                    v[i].second = 2; //visited
                    ans = max(ans, abs(dist - v[i].first));
                    dist = v[i].first;
                }
                visited = !visited;
            }
        }
        for(int i = n; i >= 0; i--){
            if(v[i].second <= 1){
                ans = max(ans, abs(dist - v[i].first));
                dist = v[i].first;
            }
        }

        printf("Case %d: %d\n", teste, ans);
        
    }

    return 0;
}