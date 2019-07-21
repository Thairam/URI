#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main() {

    priority_queue<int, vector<int>, greater<int> > caixas;
    int cont = 0, c, n, t, d, caixa;    

    cin >> c >> n;

    for (int i = 0; i < c; i++)
        caixas.push(0);
    
    for (int i = 0; i < n; i++) {
        cin >> t >> d;

        caixa = caixas.top();
        caixas.pop();
        
        if ( caixa > t + 20 ) {
            cont++;
        }
    
        caixas.push(max(t, caixa) + d);
    }

    cout << cont << endl;
    
    return 0;
}