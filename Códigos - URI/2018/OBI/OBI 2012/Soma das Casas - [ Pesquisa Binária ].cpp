#include <bits/stdc++.h>

/*Solu��o: Se no intervalo [a1, ..., an] eu tenho um n�mero x que pode ser formado por k - ai ent�o, 
 consequentemente eu posso obter k atrav�s de ai + x

 binary_search(first, last, valor) - Retorna true, se no intervalo [first, last] existe um elemento
equivalente a val, e false caso contr�rio.
*/

using namespace std;

int main() {

    int n, k, a[100002];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> k;

    for (int i = 0; i < n && a[i] <= k/2; i++){
    	//(a + i) - refer�ncia ao vetor a / (a + n) - refer�ncia a ultima posi��o do vetor.
        if ( binary_search(a + i, a + n, k - a[i]) ) {
            cout << a[i] << " " << k - a[i] << endl;
            break;
        }
	}

    return 0;

}