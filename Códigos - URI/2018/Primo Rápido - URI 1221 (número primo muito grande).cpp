#include <bits/stdc++.h>

using namespace std;

// Verifica se um número (2^ 31) máximo em um int, é primo!

int main(){
    int n, teste;
    long p;

    cin >> n;
    
    for(int i = 0; i < n; i++){
            teste = 0;
            //scanf("%ld", &p);
            cin >> p;
            
            if(p == 0){
                 printf("%s\n", "Not Prime");
                 continue;
            }
            
            if(p == 1){
                 printf("%s\n", "Not Prime");
                 continue;
            }
            
            if(p == 2){
                 printf("%s\n", "Prime");
                 continue;
            }
            
            for(int j = 2; j < sqrt(p)+1; j++){
                    if(p%j == 0) teste++;
                    if(teste == 2) break;
            }
            
            if(teste >= 1) printf("%s\n", "Not Prime");
            else printf("%s\n", "Prime");
    }

    return 0;
}