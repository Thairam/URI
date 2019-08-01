#include<bits/stdc++.h>
#define MAXN 10005
#define lld long long int

using namespace std;

int v[MAXN];

int compare(const void * a, const void * b){ return ( *(int*)a - *(int*)b ); }

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        memset(v, 0, (n+1) * sizeof(int));

        bool one = false;
        for(int i = 0; i < n; i++){
            scanf("%d", &v[i]);

            if(v[i] == 1) one = true;
        }

        if(!one) printf("1\n");
        else{
            qsort(v, n, sizeof(int), compare);

            lld sum = 1;
            for(int i = 0; i < n; i++){
                if(v[i] > sum) break;
                sum += v[i];
            }
            
            printf("%lld\n", sum);
        }
    }
    return 0;
}