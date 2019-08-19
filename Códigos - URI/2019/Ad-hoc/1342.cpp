#include <bits/stdc++.h>

using namespace std;

typedef struct player{
    int id;
    int pos;
    bool blocked;
    bool investigated;
} player;

vector<player> players;

int getNext(int pos){
    for(int i = pos; i < players.size(); i++){
        if(!players[i].investigated){
            players[i].investigated = true;
            
            if(!players[i].blocked) return i;
            else{
                player p = players[i];
                p.blocked = false;
                p.investigated = false;
                players.push_back(p);
            }
        }
	}
}

int main(){
    
    int p, s;
    while(scanf("%d %d", &p, &s), p && s){
        
        for(int i = 0; i < p; i++){
            player P;
            P.id = i + 1; 
            P.pos = 0; 
            P.blocked = false; 
            P.investigated = false;
            players.push_back(P);
        }

        int tab[s+5];
        int a, b, c, n;
        memset(tab, 0, sizeof tab);

        scanf("%d %d %d", &a, &b, &c);
        tab[a] = tab[b] = tab[c] = 1;

        scanf("%d", &n);
        int dados[n];

        for(int i = 0; i < n; i++){
            scanf("%d %d", &a, &b);
            dados[i] = a+b;
        }

        int winner = 0, pos = 0;
        for(int i = 0; i < n; i++){
            pos = getNext(i);

            int p_atual = players[pos].pos + dados[i];
            players[pos].pos = p_atual;
            
            if(p_atual > s){
                winner = players[pos].id;
                break;
            }
            else if(p_atual > 0 && p_atual < s && tab[p_atual] == 1){
                players[pos].blocked = true;
                player P = players[pos];
                P.investigated = false;
                players.push_back(P);
            }
            else{
                player P = players[pos];
                P.investigated = false;
				players.push_back(P);
				players[pos].blocked = true;
			}
        }
    	
    	players.clear();
    	printf("%d\n", winner);

    }

    return 0;
}