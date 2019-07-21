#include <bits/stdc++.h>
#include <list>

using namespace std;

typedef struct elemento{
	int dado;
	struct elemento *prox;
};

typedef struct Lista{
	elemento *inicio;
	elemento *fim;
};

void inicializarLista(Lista *p_Lista){
	p_Lista->inicio = NULL;
	p_Lista->fim = NULL;
	
}

void inserir(Lista *p_Lista, int pessoas){
	for(int i = 1; i <= pessoas; i++){
		elemento *novo;
		novo = new elemento;
		novo->prox = NULL;
		novo->dado = i;
		
		if(p_Lista->inicio == NULL){
			p_Lista->inicio = novo;
		}
		else {
			p_Lista->fim->prox = novo;
		}
		p_Lista->fim = novo;
		novo->prox = p_Lista->inicio;
	}	
}

int kill(Lista *p_Lista, int salto){
	int killer = 0;
	if(salto == 1)
		return p_Lista->fim->dado;
	else {
		
		elemento *anterior, *atual;
		anterior = p_Lista->inicio;
		atual = p_Lista->inicio;
		
		do{
		
			if(killer != (salto - 1)){
				killer++;
				anterior = atual;
				atual = anterior->prox;
			}
			else if(killer == (salto - 1)){
				killer = 0;
				anterior->prox = atual->prox;
				free(atual);
				atual = anterior->prox;
			}
					  		
		}while(atual  != atual->prox);

		return atual->dado;
	}
	
}

int main(){
	
	Lista lc;
	inicializarLista(&lc);
	int n, pessoas, salto;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		
		inicializarLista(&lc);
		cin >> pessoas >> salto;
		inserir(&lc, pessoas);
		printf("Case %d: %d\n", i , kill(&lc, salto));
		inicializarLista(&lc);
	}
	
	return 0;
}