#include <bits/stdc++.h>
 
using namespace std;
 
struct nodo {
	
    nodo *esquerda;
    nodo *direita;
    string informacao;
    nodo (string info):
        informacao(info),
        esquerda(0),
        direita (0) {}
};
 
string mostrar = "";
 
struct nodo *insere (nodo *tree, string informacao) {
    if (tree == NULL)
        tree = new nodo (informacao);
   
	else if (informacao < tree->informacao)
        tree->esquerda = insere(tree->esquerda, informacao);
    
	else if ( informacao > tree->informacao )
        tree->direita = insere(tree->direita, informacao);
    
    return tree;
};
 
bool busca(nodo *tree, string k) {
    if (tree == NULL) 
        return false;
     
	else if (tree->informacao == k) 
        return true;
    
    if (tree->informacao > k) 
       return busca (tree->esquerda, k);
     
	else 
       return busca (tree->direita, k);
    
}

void pre_Ordem(nodo *node) {
    if (node != NULL) {
        mostrar += " " + node->informacao;
        pre_Ordem(node->esquerda);
        pre_Ordem(node->direita);
    }
}
 
void ordem (nodo *node) {
    if (node != NULL) {
        ordem(node->esquerda);
        mostrar += " " + node->informacao;
        ordem(node->direita);
    }
}
 
void pos_Ordem(nodo *node) {
    if (node != NULL) {
        pos_Ordem(node->esquerda);
        pos_Ordem(node->direita);
		mostrar += " " + node->informacao;
    }
}
 
 
int main(){
    string s;
    nodo *novo = 0;
 
    while (cin >> s) {
        if (s == "INFIXA") {
            ordem(novo);
            cout << mostrar.substr(1) << endl;
            mostrar = "";
        } 
		else if (s == "POSFIXA") {
            pos_Ordem(novo);
            cout << mostrar.substr(1) << endl;
            mostrar = "";
        } 
		else if (s == "PREFIXA") {
            pre_Ordem(novo);
            cout << mostrar.substr(1) << endl;
            mostrar = "";
        } 
		else {
            string elem;
 
            cin >> elem;
 
            if (s == "I")
                novo = insere(novo, elem);
            
			else if (s == "P") {
                if (busca(novo, elem)) 
                    cout << elem << " existe\n"; 
				else 
                    cout << elem << " nao existe\n";
            }
        }
    }
 
    return 0;
}
