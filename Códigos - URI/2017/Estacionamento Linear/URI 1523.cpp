#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main() {
    int i, n, k, c, s, max=0;
    bool impossivel;
    stack<int> estacionamento;
 
    while(cin >> n >> k){
        if(n == 0 && k == 0)
            break;

        int in[100005] = {0};
        int out[100005] = {0};
        estacionamento = stack<int>();
        impossivel = false;
        
        for(i = 1; i <= n; i++){
            cin >> c >> s;
            if(i == 0 || s > max)
                max = s;

            in[c] = c; // vetor recebe na posição de entrada o horario de entrada.
            out[s] = c;	// vetor recebe na posição de saida o horario de chegada.
        }

        for(i = 1; i <= max; i++){
            if(out[i] != 0) {
            	// se a pilha não estiver vazia, e a hora de saida atual na piha for igual ao horario de saida do carro na vez, pode sair!
                if(!estacionamento.empty() && estacionamento.top() == out[i]){           
				 estacionamento.pop();
                }else {
                    impossivel = true;
                    break;
                }
            }
            if(in[i] != 0){
            	// se o tamanho da pilha for menor que o maximo de carros suportados, insere mais um carro (com o horario de chegada).
                if(estacionamento.size() < k)
                    estacionamento.push(in[i]);
                else {
                    impossivel = true;
                    break;
                }    
            }
        }

        if(impossivel)
            cout << "Nao" << endl;
        else
            cout << "Sim" << endl;
    }
 
    return 0;
}
