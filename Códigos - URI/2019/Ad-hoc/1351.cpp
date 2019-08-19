#include <bits/stdc++.h>

using namespace std;

int lista[101];
vector<int> Produtos[101];
int N, M;
double Precos[100100];
map<int, int> mapa;
double dp[101][100100];

map<int, int> compress(){
    set<int> L;
    for(int i = 0; i < M; i++) L.insert(lista[i]);

    map<int, int> mapa;
    int key = 0;

    for(set<int>::iterator it = L.begin(); it != L.end(); it++){
        Produtos[key].clear();
        mapa[*it] = key++;
    }

    for(int i = 0; i < M; i++) lista[i] = mapa[lista[i]];

    for(int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            dp[i][j] = -1;

    return mapa;
}

double solve(int pos, int item){
    if(dp[item][pos] > 0) return dp[item][pos];

    if(item >= M) return dp[item][pos] = 0;

    int p_atual = lista[item];

    // id do menor elemento em Produtos[p_atual] que é maior do que pos
    int id = upper_bound(Produtos[p_atual].begin(), Produtos[p_atual].end(), pos) - Produtos[p_atual].begin();

    if(id < Produtos[p_atual].size()) 
        return dp[item][pos] = min(solve(Produtos[p_atual][id], item + 1) + Precos[Produtos[p_atual][id]],
                                   solve(Produtos[p_atual][id], item));
    else 
        dp[item][pos] = 1e9;

}

int main(){

    while(scanf("%d %d", &M, &N), M && N){
        for(int i = 0; i < M; i++) scanf("%d", &lista[i]);

        mapa = compress();

        int produto_id;
        for(int i = 0; i < N; i++){
            scanf("%d %lf", &produto_id, &Precos[i]);
            if(mapa.count(produto_id)){
                produto_id = mapa[produto_id];
                Produtos[produto_id].push_back(i);
            }
        }

        double ans = solve(0, 0);

        if(ans < 1e9) printf("%.2lf\n", ans);
        else printf("Impossible\n");
    }

    return 0;
}