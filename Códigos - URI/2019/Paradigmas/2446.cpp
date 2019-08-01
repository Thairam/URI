#include<bits/stdc++.h>
#define MAXN 1005
#define lld long long int

/*
Você está num supermercado e está na fila do caixa para comprar alguns produtos. Assim que você termina de passar as
compras pelo caixa, se lembra que tem várias moedas em seu bolso, algumas repetidas, e fica pensando se com elas dá 
para pagar exatamente o valor das compras (para assim se livrar destas moedas e ficar com os bolsos mais leves). 
Você consegue pagar o valor exato da conta usando estas moedas?
*/

using namespace std;

int moedas[MAXN];

// v = valor das compras e m = número de moedas
bool solve(int v, int m){
    if(v == 0) return true;
    else if(m == 0 || v < 0) return false;
    else{
        return solve(v - moedas[m], m-1) || solve(v, m-1);
    }
}

int main(){
	
    int v; // 1 <= v <= 10^5
	int m; // 1 <= m <= 100
    scanf("%d %d", &v, &m);
	
    for(int i = 1; i <= m; i++)
        scanf("%d", &moedas[i]); // 1 <= m[i] <= 10^5
    
    printf("%c\n", solve(v,m) ? 'S' : 'N');

    return 0;
}